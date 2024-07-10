#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same(typeid(a), typeid(float)) && is_same(typeid(b), typeid(float))) {
        return (float)a > (float)b ? a : (a == b ? boost::any("None") : b);
    } else if (is_same(typeid(a), typeid(string)) && is_same(typeid(b), typeid(string))) {
        return (string)a > (string)b ? a : (a == b ? boost::any("None") : b);
    } else if ((is_same(typeid(a), typeid(float)) || is_same(typeid(a), typeid(int)))
               && (is_same(typeid(b), typeid(float)) || is_same(typeid(b), typeid(int)))) {
        return (boost::lexical_cast<float>(a) > boost::lexical_cast<float>(b)) ? a : (a == b ? boost::any("None") : b);
    } else if ((is_same(typeid(a), typeid(string)) || is_same(typeid(a), typeid(wchar_t)))
               && (is_same(typeid(b), typeid(string)) || is_same(typeid(b), typeid(wchar_t)))) {
        return (string)a > (string)b ? a : (a == b ? boost::any("None") : b);
    } else {
        return boost::any("None");
    }
}