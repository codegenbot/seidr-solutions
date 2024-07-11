#include <boost/any.hpp>
#include <string>

std::any compare_one(std::string str1, int num1) {
    if (num1 == 1) {
        return std::any(str1);
    } else {
        return std::any("None");
    }
}