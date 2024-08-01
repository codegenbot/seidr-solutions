```cpp
#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(std::vector<int> a, std::vector<int>b) {
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    std::list<boost::any> values = {1, 2, 3, 4.5, 5, "Hello", 7};
    auto filtered_values = filter_integers(values);
    if(issame({1, 2, 3, 5, 7}, filtered_values)) {
        std::cout << "Filtered values are same as expected." << std::endl;
    } else {
        std::cout << "Filtered values are not same as expected." << std::endl;
    }
    return 0;
}