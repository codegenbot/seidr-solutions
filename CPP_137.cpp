#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(int.class)) {
        int ai = any_cast<int>(a);
        int bi = any_cast<int>(b);
        return (ai > bi) ? a : ((bi > ai) ? b : boost::any("None"));
    } else if (is_any_of<a>(double.class)) {
        double ad = any_cast<double>(a);
        double bd = any_cast<double>(b);
        return (ad > bd) ? a : ((bd > ad) ? b : boost::any("None"));
    } else if (is_any_of<a>(string.class)) {
        string as = any_cast<string>(a);
        string bs = any_cast<string>(b);
        double da = stod(as), db = stod(bs);
        return (da > db) ? a : ((db > da) ? b : boost::any("None"));
    }
}