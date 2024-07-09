#include <boost/any.hpp>
#include <boost/convert.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same<any_tag, get_type(a)>() && is_same<any_tag, get_type(b)>()) {
        return a > b ? a : b;
    } else if (is_same<string_any_tag, get_type(a)>() && is_same<string_any_tag, get_type(b)>()) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        return str1 > str2 ? a : b;
    } else if (is_same<string_any_tag, get_type(a)>() || is_same<string_any_tag, get_type(b)>()) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        if (str1 == str2) {
            return boost::any("None");
        } else if (str1 > str2) {
            return a;
        } else {
            return b;
        }
    } else {
        throw invalid_argument("Invalid types");
    }
}