#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (string)b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string strA = to_string(a.convert_to<float>());
        return (b.convert_to<string>() > strA ? b : a);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (a.convert_to<string>() > b.convert_to<string>() ? a : b);
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (a.convert_to<int>() > b.convert_to<int>() ? a : b);
    } else {
        return boost::any("None");
    }
}