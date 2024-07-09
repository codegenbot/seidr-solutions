#include <boost/any.hpp>
#include <string>
#include <stdexcept>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same<any_tag, get_type(a)>() && is_same<any_tag, get_type(b)>()) {
        int val1 = any_cast<int>(a);
        int val2 = any_cast<int>(b);
        return val1 > val2 ? a : b;
    } else if (is_same<string_any_tag, get_type(a)>() && is_same<string_any_tag, get_type(b)>()) {
        std::string str1 = any_cast<std::string>(a);
        std::string str2 = any_cast<std::string>(b);
        return str1 > str2 ? a : b;
    } else if (is_same<string_any_tag, get_type(a)>() || is_same<string_any_tag, get_type(b)>()) {
        std::string str1 = any_cast<std::string>(a);
        std::string str2 = any_cast<std::string>(b);
        if (str1 == str2) {
            return boost::any("None");
        } else if (str1 > str2) {
            return a;
        } else {
            return b;
        }
    } else {
        throw std::invalid_argument("Invalid types");
    }
}