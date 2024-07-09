#include <boost/any.hpp>
#include <string>

using namespace boost;
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(int.class)) {
        int ai = any_cast<int>(a);
        int bi = any_cast<int>(b);
        return boost::any(std::to_string(ai).compare(std::to_string(bi)));
    }
    else if (is_any_of<a>(double.class)) {
        double ad = any_cast<double>(a);
        double bd = any_cast<double>(b);
        return boost::any((std::to_string(ad) + "_").compare((std::to_string(bd) + "_")));
    }
    else {
        string as = any_cast<string>(a);
        string bs = any_cast<string>(b);
        return boost::any(as.compare(bs));
    }
}