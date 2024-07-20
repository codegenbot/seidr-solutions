#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (boost::any_cast<string>(b) > to_string(a.convert_to<int>())) ? b : "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        float num;
        if (str.find('.') != string::npos || str.find(',') != string::npos) {
            num = stof(str);
        }
        else {
            num = stof(str + ".0");
        }
        return (a.convert_to<float>() > num) ? a : ((a.convert_to<float>() < num) ? b : "None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (boost::any_cast<string>(a) > to_string(b.convert_to<int>())) ? a : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(b);
        float num;
        if (str.find('.') != string::npos || str.find(',') != string::npos) {
            num = stof(str);
        }
        else {
            num = stof(str + ".0");
        }
        return (stof(boost::any_cast<string>(a)) > num) ? a : ((stof(boost::any_cast<string>(a)) < num) ? b : "None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (a.convert_to<int>() > b.convert_to<int>()) ? a : ((a.convert_to<int>() < b.convert_to<int>()) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (a.convert_to<float>() > b.convert_to<float>()) ? a : ((a.convert_to<float>() < b.convert_to<float>()) ? b : boost::any("None"));
    }
    else {
        return "None";
    }
}