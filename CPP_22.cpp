#include <iostream>
#include <vector>
#include <string>
#include <boost/any.hpp>
#include <list>

std::vector<int> filter_integers(const std::list<boost::any>& values) {
    std::vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}