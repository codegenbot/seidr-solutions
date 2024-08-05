#include <iostream>
#include <string>
#include <cassert>
#include <boost/any.hpp>

std::string compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == b.type()) {
        if (a.type() == typeid(std::string)) {
            return boost::any_cast<std::string>(a) == boost::any_cast<std::string>(b) ? boost::any_cast<std::string>(a) : "None";
        }
    }
    return "None";
}

int main() {
    std::string result = compare_one("1", "1");

    assert(result == "1");

    return 0;
}