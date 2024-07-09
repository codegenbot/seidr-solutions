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
        string s1 = (string)a.convert_to<string>();
        string s2 = (string)b.convert_to<string>();
        if (s1.find('.') != string::npos || s1.find(',') != string::npos)
            return max(s1, s2);
        else
            return (s1 > s2 ? a : b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = (int)a.convert_to<int>();
        string s = (string)b.convert_to<string>();
        if (s.find('.') != string::npos || s.find(',') != string::npos)
            return max(atof(s.c_str()), i);
        else
            return (stoi(s) > i ? b : a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string s = (string)a.convert_to<string>();
        int i = (int)b.convert_to<int>();
        if (s.find('.') != string::npos || s.find(',') != string::npos)
            return max(atof(s.c_str()), i);
        else
            return (stoi(s) > i ? a : b);
    }
    else {
        return "None";
    }
}