#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>

bool issame(const boost::any& val, const std::type_info& type) {
    return val.type() == type;
}

std::vector<int> filter_integers(const std::list<boost::any>& values) {
    std::vector<int> result;
    for (const auto& val : values) {
        if (issame(val, typeid(int))) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    // Test the filter_integers function
    std::list<boost::any> values = {10, std::string("hello"), 20, 30, "world"};
    std::vector<int> filtered = filter_integers(values);

    for (const auto& val : filtered) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}