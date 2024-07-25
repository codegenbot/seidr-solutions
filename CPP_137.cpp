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
        if (str.find('.') != string::npos || str.find(',') != string::npos)
            return max(atof(str.c_str()), f);
        else
            return max(stof(str), f);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = (string)a.convert_to<string>();
        string str2 = (string)b.convert_to<string>();
        if (str1.find('.') != string::npos || str1.find(',') != string::npos)
            return max(atof(str1.c_str()), atof(str2.c_str()));
        else
            return (str1 > str2) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = (int)a.convert_to<int>();
        string str = (string)b.convert_to<string>();
        if (str.find('.') != string::npos || str.find(',') != string::npos)
            return max(atof(str.c_str()), i);
        else
            return (stof(str) > i) ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = (string)a.convert_to<string>();
        int i = (int)b.convert_to<int>();
        if (str.find('.') != string::npos || str.find(',') != string::npos)
            return max(atof(str.c_str()), i);
        else
            return (stof(str) > i) ? a : b;
    }
    else {
        return "None";
    }
}