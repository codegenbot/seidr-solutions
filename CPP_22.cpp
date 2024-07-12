```cpp
#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value) != 0) { 
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    std::list<boost::any> values = {{1}, {2, 3}, {4, 5, 6}};
    
    vector<int> filteredValues = filter_integers(values);
    for (const auto& value : filteredValues) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    return 0;
}