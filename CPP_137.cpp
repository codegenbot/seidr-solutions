#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<string>(a)) {
        string str1 = any_cast<string>(a);
        if (is_any_of<string>(b)) {
            string str2 = any_cast<string>(b);
            return (stod(str2) > stod(str1)) ? b : ((stod(str2) < stod(str1)) ? a : boost::any("None"));
        } else {
            double d = any_cast<double>(b);
            if (d > stod(str1))
                return b;
            else if (d < stod(str1))
                return a;
            else
                return boost::any("None");
        }
    } else {
        double d1 = any_cast<double>(a);
        if (is_any_of<string>(b)) {
            string str2 = any_cast<string>(b);
            return (stod(str2) > d1) ? b : ((stod(str2) < d1) ? a : boost::any("None"));
        } else {
            double d2 = any_cast<double>(b);
            if (d2 > d1)
                return b;
            else if (d2 < d1)
                return a;
            else
                return boost::any("None");
        }
    }
}