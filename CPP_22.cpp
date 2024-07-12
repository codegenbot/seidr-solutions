```cpp
#include <boost/any.hpp>
#include <iostream>
#include <vector>
#include <list>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    // Example usage
    std::list<boost::any> values = {{1}, {2, 3}, {4}, {"hello"}};
    std::vector<int> integers = filter_integers(values);
    
    if (issame(integers, std::vector<int>{1, 2, 3, 4})) {
        std::cout << "Integers are the same as expected." << std::endl;
    } else {
        std::cout << "Integers are not the same as expected." << std::endl;
    }
    
    return 0;
}