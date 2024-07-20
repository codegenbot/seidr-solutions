#include <stdio.h>
#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if ((string)a.convert_to<string>() > (string)b.convert_to<string>()) {
            return a;
        }
        else if ((string)a.convert_to<string>() < (string)b.convert_to<string>()) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        // ...
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        // ...
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        // ...
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        // ...
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max((float)a.convert_to<float>(), (int)b.convert_to<int>());
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return ((string)a.convert_to<string>() > (string)b.convert_to<string>()) ? a : ((string)a.convert_to<string>() < (string)b.convert_to<string>()) ? b : boost::any("None");
    }
    else {
        if ((float)a.convert_to<float>() > (float)b.convert_to<float>()) {
            return a;
        }
        else if ((float)a.convert_to<float>() < (float)b.convert_to<float>()) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
}