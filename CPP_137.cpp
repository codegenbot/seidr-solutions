#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convertible_to<int>(), (float)b.convertible_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)b.convertible_to<string>();
        float f = (float)a.convertible_to<float>();
        return (f > stof(str)) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (stof((string)a.convertible_to<string>()) > stof((string)b.convertible_to<string()))) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int i = (int)a.convertible_to<int>();
        int j = (int)b.convertible_to<int>();
        return (i > j) ? a : ((i < j) ? b : boost::any("None")));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float f1 = (float)a.convertible_to<float>();
        float f2 = (float)b.convertible_to<float>();
        return (f1 > f2) ? a : ((f1 < f2) ? b : boost::any("None")));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int i = (int)b.convertible_to<int>();
        string str = (string)a.convertible_to<string>();
        return (stof(str) > i) ? a : ((stof(str) < i) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = (int)a.convertible_to<int>();
        string str = (string)b.convertible_to<string>();
        return (i > stof(str)) ? a : ((i < stof(str)) ? b : boost::any("None"));
    }
    else {
        return boost::any("None");
    }
}