#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (string)b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)a;
        float aFloat = stof(str);
        return max(aFloat, stof((string)b));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (string)a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = (string)a;
        float aFloat = stof(str);
        return max(aFloat, (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max((float)a.convert_to<float>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return max((string)a, (string)b);
    }
    return boost::any("None");
}