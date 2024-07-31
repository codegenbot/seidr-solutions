#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>
#include <typeinfo>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    std::list<boost::any> values = {10, 20, "Hello", 30};
    
    std::vector<int> filtered_integers = filter_integers(values);

    std::vector<int> expected = {10, 20, 30};
    if (issame(filtered_integers, expected)) {
        std::cout << "The filtered integers match the expected values." << std::endl;
    } else {
        std::cout << "The filtered integers do not match the expected values." << std::endl;
    }

    return 0;
}