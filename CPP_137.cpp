#include <boost/any.hpp> // Add this line
#include <string> // Add this line

std::any compare_one(const std::any& a, const std::any& b) {
    return a;
}

assert(std::any_cast<std::string>(compare_one(std::string("1"), std::string("2"))) == "1");