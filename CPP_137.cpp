Here is the completed code:

#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same_type<double>(a)) {
        if (is_same_type<double>(b)) {
            return greater<double>()(get<double>(a), get<double>(b)) ? a : b;
        } else if (is_same_type<string>(b)) {
            string str = to_string(get<double>(a));
            return greater<string>()(str, get<string>(b)) ? a : b;
        }
    } else if (is_same_type<string>(a)) {
        if (is_same_type<string>(b)) {
            return greater<string>()(get<string>(a), get<string>(b)) ? a : b;
        } else if (is_same_type<double>(b)) {
            double val = stod(get<string>(a));
            return greater<double>()(val, get<double>(b)) ? a : b;
        }
    }
    return boost::any_cast<string>("None");
}