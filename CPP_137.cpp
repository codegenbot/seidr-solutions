#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convertible_to<int>(), (float)b.convertible_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (b.convertible_to<string>()) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        return (stof(str) > (float)a.convertible_to<float>()) ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (stoi((string)a) < (int)b.convertible_to<int>()) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(b);
        return (stof(str) > stof((string)a)) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a.convertible_to<int>() > (int)b.convertible_to<int>() ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (float)a.convertible_to<float>() > (float)b.convertible_to<float>() ? a : b;
    }
    else {
        return boost::any("None");
    }
}