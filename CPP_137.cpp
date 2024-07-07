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
        return (string)a.convert_to<string>() > (string)b.convert_to<string>() ? a : (string)b.convert_to<string>() == (string)a.convert_to<string>() ? boost::any("None") : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (string)b.convert_to<string>() > to_string((int)a.convert_to<int>()) ? b : "None";
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max((float)a.convert_to<float>(), (int)b.convert_to<int>());
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (string)a.convert_to<string>() > to_string((int)b.convert_to<int>()) ? a : "None";
    }
    return boost::any("None");
}