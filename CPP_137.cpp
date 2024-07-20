#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a,string>()) {
        string s = any_cast<string>(a);
        if (is_any_of<b,string>()) {
            return (stod(s) > stod(any_cast<string>(b))) ? a : ((s == any_cast<string>(b)) ? boost::any("None") : b);
        } else {
            return (stod(s) > any_cast<double>(b)) ? a : ((s == to_string(any_cast<double>(b))) ? boost::any("None") : b);
        }
    } else if (is_any_of<b,string>()) {
        string s = any_cast<string>(b);
        if (is_any_of<a,string>()) {
            return (stod(any_cast<string>(a)) > stod(s)) ? a : ((any_cast<string>(a) == s) ? boost::any("None") : b);
        } else {
            return (any_cast<double>(a) > stod(s)) ? a : ((to_string(any_cast<double>(a)) == s) ? boost::any("None") : b);
        }
    } else {
        if (a < b) return b;
        if (a == b) return boost::any("None");
        return a;
    }
}