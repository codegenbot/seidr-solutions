#include <string>
#include <boost/any.hpp>

std::any compare_one(const std::string& a, const std::string& b) {
    return a;
}

assert(boost::any_cast<std::string>(compare_one(std::string("1"), std::string("2"))) == "1");