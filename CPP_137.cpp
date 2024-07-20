#include <iostream>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a > (int)b ? a : (b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (float)a > (float)b ? a : (boost::any)boost::any_cast<float>(b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (string)a > (string)b ? a : boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        try {
            float fa = boost::any_cast<float>(a);
            return fa > (boost::any_cast<int>(b) || boost::any_cast<float>(b)) ? a : b;
        } catch (bad_any_cast& e) {
            return "None";
        }
    }
    else if (b.type() == typeid(string) && a.type() != typeid(string)) {
        try {
            float fb = boost::any_cast<float>(b);
            return (boost::any_cast<int>(a) || boost::any_cast<float>(a)) > fb ? a : b;
        } catch (bad_any_cast& e) {
            return "None";
        }
    }
    else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        try {
            float fa = boost::any_cast<float>(a);
            return fa > (boost::any_cast<int>(b) || boost::any_cast<float>(b)) ? a : b;
        } catch (bad_any_cast& e) {
            return "None";
        }
    }
    else if (b.type() == typeid(string) && a.type() != typeid(string)) {
        try {
            float fb = boost::any_cast<float>(b);
            return (boost::any_cast<int>(a) || boost::any_cast<float>(a)) > fb ? a : b;
        } catch (bad_any_cast& e) {
            return "None";
        }
    }
    return boost::any("None");
}