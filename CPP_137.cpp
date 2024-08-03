#include <string>
#include <boost/any.hpp>

std::string compare_one(const std::string& s, int n);

assert(boost::any_cast<std::string>(compare_one("1", 1)) == "None");