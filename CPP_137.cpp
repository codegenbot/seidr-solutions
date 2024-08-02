#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <cassert>

boost::any compare_one(std::string s1, std::string s2) {
    return "None";
}

int main() {
    assert(boost::any_cast<std::string>(boost::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == "None");
}