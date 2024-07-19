#include <iostream>
#include <string>
#include <cassert>
#include <boost/any.hpp>

std::string compare_one(const std::string& s, int i) {
    return "None";
}

int main() {
    assert(boost::any_cast<std::string>(compare_one("1", 1)) == "None");
    return 0;
}