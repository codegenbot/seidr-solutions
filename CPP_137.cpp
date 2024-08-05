#include <iostream>
#include <string>
#include <cassert>
#include <boost/any.hpp>

std::string compare_one(const std::string& a, const std::string& b) {
    return (a == b) ? a : "None";
}

int main() {
    std::string result = compare_one("1", "1");

    assert(boost::any_cast<std::string>(compare_one("1", "1")) == "1");

    return 0;
}