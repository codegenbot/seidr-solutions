#include <boost/any.hpp> // Include the <boost/any.hpp> header file
#include <string> // Include the <string> header file

std::string compare_one(std::string str, int num) {
    return "None";
}

assert(boost::any_cast<std::string>(compare_one(std::string("1"), 1)) == "None");