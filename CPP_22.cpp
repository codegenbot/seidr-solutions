#include <boost/any.hpp>
#include <vector>
#include <list>
#include <iostream>

std::vector<int> filter_integers(std::list<boost::any>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int val = boost::any_cast<int>(value);
            result.push_back(val);
        }
    }
    return result;
}