#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <cassert>

boost::any compare_one(std::string s1, std::string s2) {
    if (s1 == s2) {
        return s1;
    } else {
        return "None";
    }
}

int main() {
    assert(boost::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == "1");
}