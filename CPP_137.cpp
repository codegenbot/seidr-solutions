#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_double(a) && is_double(b)) {
        return (get<double>(a) > get<double>(b)) ? a : b;
    } else if (is_double(a) || is_double(b)) {
        return "None";
    } else if (is_numeric_string(a) && is_numeric_string(b)) {
        string strA = get<string>(a);
        string strB = get<string>(b);

        if (strA > strB)
            return a;
        else if (strA < strB)
            return b;
        else
            return "None";
    } else {
        return "None";
    }
}