#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same<type_of<a>, int>::value && is_same<type_of<b>, float>::value) {
        return b;
    } else if (is_same<type_of<a>, float>::value && is_same<type_of<b>, string>::value) {
        return max((float)a, (string)b);
    } else if (is_same<type_of<a>, int>::value && is_same<type_of<b>, string>::value) {
        return b;
    } else if (is_same<type_of<a>, float>::value && is_same<type_of<b>, int>::value) {
        return boost::any((float)a > (int)b ? a : b);
    } else if (is_same<type_of<a>, string>::value && is_same<type_of<b>, string>::value) {
        return max(a, b);
    }
    return "None";
}