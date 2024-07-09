#include <boost/any.hpp>
#include <boost/type_index.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (get_type(a) == typeid(any_tag) && get_type(b) == typeid(any_tag)) {
        return a > b ? a : b;
    } else if (get_type(a) == typeid(string_any_tag) && get_type(b) == typeid(string_any_tag)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        return str1 > str2 ? a : b;
    } else if ((get_type(a) == typeid(string_any_tag) || get_type(b) == typeid(string_any_tag))) {
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