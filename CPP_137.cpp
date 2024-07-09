#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)a.convert_to<string>();
        float f = (float)b.convert_to<float>();
        return (f > stof(str)) ? boost::any(f) : boost::any(str);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = (string)a.convert_to<string>();
        string str2 = (string)b.convert_to<string>();
        return (stof(str2) > stof(str1)) ? boost::any(str2) : (stof(str1) == stof(str2)) ? boost::any("None") : boost::any(str1);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = (int)a.convert_to<int>();
        string str = (string)b.convert_to<string>();
        return (stof(str) > i) ? boost::any(str) : (i == stof(str)) ? boost::any("None") : boost::any(i);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = (string)a.convert_to<string>();
        int i = (int)b.convert_to<int>();
        return (stof(str) > i) ? boost::any(str) : (i == stof(str)) ? boost::any("None") : boost::any(i);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = (float)a.convert_to<float>();
        int i = (int)b.convert_to<int>();
        return (f > i) ? boost::any(f) : (i == f) ? boost::any("None") : boost::any(i);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int i1 = (int)a.convert_to<int>();
        int i2 = (int)b.convert_to<int>();
        return (i2 > i1) ? boost::any(i2) : (i1 == i2) ? boost::any("None") : boost::any(i1);
    }
    else {
        return "None";
    }
}