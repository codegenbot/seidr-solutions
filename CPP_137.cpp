#include <string>
#include <boost/any.hpp>

boost::any compare_one(std::string str, int num);

assert(boost::any_cast<std::string>(compare_one(std::string("1"), 1)) == "None");