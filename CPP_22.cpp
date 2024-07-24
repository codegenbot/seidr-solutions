#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>
#include <typeinfo>

bool issame(const boost::any& a, const boost::any& b) {
    if (a.type() == b.type()) {
        if (a.type() == typeid(int)) {
            return boost::any_cast<int>(a) == boost::any_cast<int>(b);
        }
    }
    return false;
}

std::vector<int> filter_integers(const std::list<boost::any>& values) {
    std::vector<int> result;
    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    // Your main function logic here
    return 0;
}