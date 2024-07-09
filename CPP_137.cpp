#include <boost/any.hpp>
#include <string>
#include <boost/algorithm/string.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same<any_tag, get_type(a)>() && is_same<any_tag, get_type(b)>()) {
        return a > b ? a : b;
    } else if (is_same<string_any_tag, get_type(a)>() && is_same<string_any_tag, get_type(b)>()) {
        std::string str1 = any_cast<std::string>(a);
        std::string str2 = any_cast<std::string>(b);
        boost::algorithm::sort(str1);
        boost::algorithm::sort(str2);
        return str1 > str2 ? a : b;
    } else if (is_same<string_any_tag, get_type(a)>() || is_same<string_any_tag, get_type(b)>()) {
        std::string str1 = any_cast<std::string>(a);
        std::string str2 = any_cast<std::string>(b);
        boost::algorithm::sort(str1);
        boost::algorithm::sort(str2);
        if (str1 == str2) {
            return "None";
        } else if (str1 > str2) {
            return a;
        } else {
            return b;
        }
    } else {
        throw std::invalid_argument("Invalid types");
    }
}