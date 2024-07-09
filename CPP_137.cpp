#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convertible_to<int>(), (float)b.convertible_to<float>());
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return (string)b.convertible_to<string>() > to_string((float)a.convertible_to<float>()) ? b : "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (string)a.convertible_to<string>() > (string)b.convertible_to<string>() ? a : ((string)a.convertible_to<string>() == (string)b.convertible_to<string>()) ? boost::any("None") : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (int)a.convertible_to<int>() > stoi((string)b.convertible_to<string>()) ? a : ((int)a.convertible_to<int>() == stoi((string)b.convertible_to<string>())) ? boost::any("None") : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a.convertible_to<float>() > (int)b.convertible_to<int>() ? a : ((float)a.convertible_to<float>() == (int)b.convertible_to<int>()) ? boost::any("None") : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return stoi((string)a.convertible_to<string>()) > (int)b.convertible_to<int>() ? a : ((stoi((string)a.convertible_to<string>())) == (int)b.convertible_to<int>()) ? boost::any("None") : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a.convertible_to<int>() > (int)b.convertible_to<int>() ? a : ((int)a.convertible_to<int>() == (int)b.convertible_to<int>()) ? boost::any("None") : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (float)a.convertible_to<float>() > (float)b.convertible_to<float>() ? a : ((float)a.convertible_to<float>() == (float)b.convertible_to<float>()) ? boost::any("None") : b;
    }
}