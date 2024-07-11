#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max(a, boost::any(b.convert_to<int>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convert_to<string>();
        string str2 = b.convert_to<string>();
        int comp1 = str1.find(',');
        int comp2 = str2.find(',');
        if (comp1 != string::npos || comp2 != string::npos) {
            return max(a, b);
        }
        else {
            return (stof(str1) > stof(str2)) ? a : ((stof(str1) < stof(str2)) ? b : boost::any("None"));
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num = a.convert_to<int>();
        string str = b.convert_to<string>();
        int comp = str.find(',');
        if (comp != string::npos) {
            return max(a, boost::any(str));
        }
        else {
            return (stof(str) > num) ? boost::any(str) : ((stof(str) < num) ? a : boost::any("None"));
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int num = b.convert_to<int>();
        string str = a.convert_to<string>();
        int comp = str.find(',');
        if (comp != string::npos) {
            return max(a, boost::any(str));
        }
        else {
            return (stof(str) > num) ? a : ((stof(str) < num) ? boost::any("None") : boost::any(str));
        }
    }
    else {
        if (a.convert_to<int>() == b.convert_to<int>()) {
            return boost::any("None");
        }
        else {
            return max(a, b);
        }
    }
}