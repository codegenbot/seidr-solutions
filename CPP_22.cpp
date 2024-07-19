#include <iostream>
#include <vector>
#include <boost/any.hpp>
#include <typeinfo>
#include <list>
#include <cassert>

std::vector<int> filter_integers(std::list<boost::any> values);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for (auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}