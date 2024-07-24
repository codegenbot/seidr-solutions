#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>
#include <typeinfo>

bool issame(const boost::any& a, const boost::any& b) {
    return a.type() == b.type();
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
    // Add your test cases here to verify the functions
    return 0;
}