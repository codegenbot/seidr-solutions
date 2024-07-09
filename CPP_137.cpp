#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (any_cast<int>(a) && any_cast<int>(b)) {
        return std::to_string(any_cast<int>(a)) - std::to_string(any_cast<int>(b));
    } else if (any_cast<double>(a) && any_cast<double>(b)) {
        return std::to_string(any_cast<double>(a)) + "_" - std::to_string(any_cast<double>(b)) + "_";
    } else {
        return any_cast<std::string>(a) - any_cast<std::string>(b);
    }
}