#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(int.class)) {
        int x = any_cast<int>(a);
        int y = any_cast<int>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    } else if (is_any_of<a>(double.class)) {
        double x = any_cast<double>(a);
        double y = any_cast<double>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    } else if (is_any_of<a>(string.class)) {
        string s1 = any_cast<string>(a);
        string s2 = any_cast<string>(b);
        double x = atof(s1.c_str());
        double y = atof(s2.c_str());
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    }
}