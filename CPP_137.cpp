#include <string>
#include <iostream>
#include <cassert>
#include <boost/any.hpp>

std::string compare_one(const std::string& s1, int number) {
    if (std::stoi(s1) == number) {
        return "Equal";
    } else {
        return "Not equal";
    }
}

int main() {
    assert(boost::any_cast<std::string>(compare_one("1", 1)) == "Not equal");
}