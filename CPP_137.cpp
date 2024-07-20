#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return max((float)a.convert_to<float>(), (string)b.convert_to<string>());
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (max(a.convert_to<string>(), b.convert_to<string())) ? a : boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (a.convert_to<int>() > b.convert_to<int>()) ? a : ((a.convert_to<int>() < b.convert_to<int>()) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (a.convert_to<float>() > b.convert_to<float>()) ? a : ((a.convert_to<float>() < b.convert_to<float>()) ? b : boost::any("None"));
    }
}