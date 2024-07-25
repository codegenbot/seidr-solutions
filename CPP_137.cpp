#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(float_class())) && is_any_of<b>(float_class()) {
        return (any_cast<float>(a) > any_cast<float>(b)) ? a : b;
    } else if ((is_string<a>()) && (is_string<b>())) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        return (stof(str1) > stof(str2)) ? a : b;
    } else if ((is_any_of<a>(int_class())) && (is_any_of<b>(int_class()))) {
        int x = any_cast<int>(a);
        int y = any_cast<int>(b);
        return (x > y) ? a : b;
    }
    return "None";
}