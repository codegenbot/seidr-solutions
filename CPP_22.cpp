#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>

bool issame(const boost::any& value, const std::type_info& type) {
    return value.type() == type;
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
    // Main function can use the issame and filter_integers functions here
    return 0;
}