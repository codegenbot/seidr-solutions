```
#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<int>(a) > boost::any_cast<float>(b)
               ? a
               : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(b) > boost::any_cast<int>(a)
               ? b
               : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return ((string)boost::any_cast<string>(a) >= (string)boost::any_cast<string>(b))
               ? a
               : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num = boost::any_cast<int>(a);
        string str = boost::any_cast<string>(b);
        return (num >= stoi(str))
               ? "None"
               : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int num = boost::any_cast<int>(b);
        return (stoi(str) >= num)
               ? a
               : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float num = boost::any_cast<float>(a);
        string str = boost::any_cast<string>(b);
        return (num >= stof(str))
               ? a
               : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(a);
        float num = boost::any_cast<float>(b);
        return (stof(str) >= num)
               ? a
               : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b)
               ? a
               : b;
    }
    else {
        return "None";
    }
}