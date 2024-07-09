#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_numeric(a) && is_numeric(b)) {
        return (get<double>(a) > get<double>(b)) ? a : ((get<double>(a) == get<double>(b))) ? "None" : b;
    } else if (!is_numeric(a) && !is_numeric(b)) {
        return (std::string(get<string>(a)) > std::string(get<string>(b))) ? a : ((std::string(get<string>(a)) == std::string(get<string>(b)))) ? "None" : b;
    } else {
        return "None";
    }
}

bool is_numeric(boost::any a) {
    try {
        get<double>(a);
        return true;
    } catch (...) {
        return false;
    }
}