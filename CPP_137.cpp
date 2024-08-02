#include "path/to/boost/boost/any.hpp"

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of_type<double>(a) && is_any_of_type<double>(b)) {
        double da = dynamic_cast<any &>(a).get<double>();
        double db = dynamic_cast<any &>(b).get<double>();

        return (da > db) ? a : ((da == db)) ? any("None") : b;
    } else if (is_any_of_type<std::string>(a) && is_any_of_type<std::string>(b)) {
        std::string sa = dynamic_cast<any &>(a).get<std::string>();
        std::string sb = dynamic_cast<any &>(b).get<std::string>();

        return (std::stoi(sa) > std::stoi(sb)) ? a : ((std::stoi(sa) == std::stoi(sb))) ? any("None") : b;
    } else {
        return "Invalid input type";
    }
}

bool is_any_of_type(T t, boost::any a) {
    try {
        if (a.type() == typeid(T)) {
            return true;
        }
    } catch (...) {
        // handle exception
    }
    return false;
}