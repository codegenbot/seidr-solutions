#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<string>(a)) {
        string s1 = any_cast<string>(a);
        if (is_any_of<string>(b)) {
            string s2 = any_cast<string>(b);
            return (stod(s1) > stod(s2)) ? a : ((stod(s1) < stod(s2)) ? b : boost::any("None"));
        } else {
            double d2 = any_cast<double>(b);
            return (stod(s1) > d2) ? a : ((stod(s1) < d2) ? b : boost::any("None"));
        }
    } else {
        if (is_any_of<string>(b)) {
            string s2 = any_cast<string>(b);
            double d1 = any_cast<double>(a);
            return (d1 > stod(s2)) ? a : ((d1 < stod(s2)) ? b : boost::any("None"));
        } else {
            double d1 = any_cast<double>(a);
            double d2 = any_cast<double>(b);
            return (d1 > d2) ? a : ((d1 < d2) ? b : boost::any("None"));
        }
    }
}