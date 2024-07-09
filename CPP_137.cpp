Here is the completed code:

#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_numeric(a)) {
        if (is_numeric(b)) {
            return (get<double>(a) > get<double>(b)) ? a : (get<double>(a) == get<double>(b)) ? "None" : b;
        } else {
            return (get<double>(a) > boost::any_cast<std::string>(b).compare(".") >= 0 || boost::any_cast<std::string>(b).find(",") < 0) ? a : b;
        }
    } else if (is_numeric(b)) {
        return (boost::any_cast<std::string>(a).compare(".") >= 0 || boost::any_cast<std::string>(a).find(",") < 0) > boost::any_cast<double>(b) ? a : "None";
    } else {
        if (boost::any_cast<std::string>(a).compare(".") >= 0 || boost::any_cast<std::string>(a).find(",") < 0 && 
            (boost::any_cast<std::string>(b).compare(".") >= 0 || boost::any_cast<std::string>(b).find(",") < 0)) {
            return b;
        } else if ((boost::any_cast<std::string>(a).compare(".") >= 0 || boost::any_cast<std::string>(a).find(",") < 0) && 
                   (boost::any_cast<std::string>(b).compare(".") >= 0 || boost::any_cast<std::string>(b).find(",") < 0)) {
            return "None";
        } else {
            return a;
        }
    }
}

bool is_numeric(boost::any any) {
    try {
        get<double>(any);
        return true;
    } catch (...) {
        return false;
    }
}