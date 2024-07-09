#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same<any_tag, get_type(a)>() && is_same<any_tag, get_type(b)>()) {
        return any_cast<any>(a) > any_cast<any>(b) ? a : b;
    } else if (is_same<string_any_tag, get_type(a)>() && is_same<string_any_tag, get_type(b)>()) {
        std::string str1 = any_cast<std::string>(a);
        std::string str2 = any_cast<std::string>(b);
        return str1 > str2 ? a : b;
    } else if (is_same<string_any_tag, get_type(a)>() || is_same<string_any_tag, get_type(b)>()) {
        std::string str1 = any_cast<std::string>(a);
        std::string str2 = any_cast<std::string>(b);
        return str1 == str2 ? boost::any("None") : (str1 > str2 ? a : b);
    } else {
        throw invalid_argument("Invalid types");
    }
}