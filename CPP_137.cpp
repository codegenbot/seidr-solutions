#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return (string)b.convert_to<string>() > to_string((float)a.convert_to<float>()) ? b : "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (string)b.convert_to<string>() > a.convert_to<string>() ? b : "None";
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max((int)a.convert_to<int>(), (int)b.convert_to<int>()) == (int)a.convert_to<int>() ? boost::any("None") : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (float)a.convert_to<float>() > (float)b.convert_to<float>() ? a : "None";
    }
}