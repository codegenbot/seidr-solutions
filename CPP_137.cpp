#include <boost/any.hpp>
#include <string>

using namespace boost;
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(int.class)) {
        int ai = any_cast<int>(a);
        int bi = any_cast<int>(b);
        return make_shared<string>(to_string(ai) == to_string(bi) ? "Equal" : to_string(ai) < to_string(bi) ? "Less than" : "Greater");
    }
    else if (is_any_of<a>(double.class)) {
        double ad = any_cast<double>(a);
        double bd = any_cast<double>(b);
        return make_shared<string>(to_string(ad) == to_string(bd) ? "Equal" : to_string(ad) < to_string(bd) ? "Less than" : "Greater");
    }
    else {
        string as = any_cast<string>(a);
        string bs = any_cast<string>(b);
        return make_shared<string>(as == bs ? "Equal" : as < bs ? "Less than" : "Greater");
    }
}