#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return max((float)a.convert_to<float>(), stof(b.convert_to<string>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (stof(a.convert_to<string>()) > stof(b.convert_to<string()))) ? a : ((stof(a.convert_to<string>()) < stof(b.convert_to<string()))) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (int)a.convert_to<int>() > stof(b.convert_to<string>()) ? a : ((int)a.convert_to<int>() < stof(b.convert_to<string>())) ? b : boost::any("None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a.convert_to<int>() > (int)b.convert_to<int>() ? a : ((int)a.convert_to<int>() < (int)b.convert_to<int>()) ? b : boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a.convert_to<float>() > (int)b.convert_to<int>() ? a : ((float)a.convert_to<float>() < (int)b.convert_to<int>()) ? b : boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (float)a.convert_to<float>() > (float)b.convert_to<float>() ? a : ((float)a.convert_to<float>() < (float)b.convert_to<float>()) ? b : boost::any("None");
    }
    else {
        return boost::any("None");
    }
}