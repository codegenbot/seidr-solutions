#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(double())) {
        double da = any_cast<double>(a);
        double db = any_cast<double>(b);
        if (da > db) return a;
        else if (da < db) return b;
        else return boost::any("None");
    }
    else if (is_any_of<a>(std::string())) {
        std::string s1 = any_cast<std::string>(a);
        std::string s2 = any_cast<std::string>(b);
        return s1 > s2 ? a : b;
    }
    else {
        return boost::any("Invalid input");
    }
}