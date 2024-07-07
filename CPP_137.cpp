```
#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(double())) {
        if (is_any_of<b>(double())) {
            return a > b ? a : b;
        }
        else {
            double da = any_cast<double>(a);
            double db = any_cast<double>(b);
            if (da == db) return boost::any("None");
            return da > db ? a : b;
        }
    }
    else if (is_any_of<a>(std::string())) {
        if (is_any_of<b>(std::string())) {
            std::string s1 = any_cast<std::string>(a);
            std::string s2 = any_cast<std::string>(b);
            return s1 > s2 ? a : b;
        }
        else {
            double da = any_cast<double>(a);
            std::string s2 = any_cast<std::string>(b);
            if (da == 0.0) return boost::any(s2);
            if (db == 0.0) return a;
            if (da > 0 && db < 0) return a;
            if (da < 0 && db > 0) return b;
            return boost::any("None");
        }
    }
    else {
        return boost::any("Invalid input");
    }
}