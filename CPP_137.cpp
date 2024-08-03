#include <boost/any.hpp>
#include <string>

std::string compare_one(std::string str, int num) {
    return boost::any_cast<std::string>("None");
}