#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)boost::any_cast<int>(a) > boost::any_cast<float>(b)
               ? a
               : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)boost::any_cast<int>(b) > boost::any_cast<float>(a)
               ? b
               : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return ((string)boost::any_cast<string>(a) >= (string)boost::any_cast<string>(b))
               ? a
               : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        int num = boost::any_cast<int>(a);
        return num >= stoi(str)
               ? boost::any(a)
               : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int num = boost::any_cast<int>(b);
        return stoi(str) >= num
               ? a
               : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        float num = boost::any_cast<float>(a);
        return num >= stof(str)
               ? a
               : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(b);
        float num = boost::any_cast<float>(a);
        return stof(str) >= num
               ? a
               : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (boost::any_cast<int>(a) > boost::any_cast<int>(b))
               ? a
               : b;
    }
    else {
        return boost::any("None");
    }
}