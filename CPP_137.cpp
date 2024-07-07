#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convertible_to<int>(), (float)b.convertible_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (b.convertible_to<string>()) > to_string(a.convertible_to<int>()) ? b : "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)b;
        size_t pos = str.find(',');
        if (pos != string::npos) {
            float a1 = stof(str.substr(0, pos));
            float a2 = stof(str.substr(pos + 1));
            return max(a1, a2);
        }
        else {
            return (stof(str)) > a.convertible_to<float>() ? b : "None";
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (string)b > a ? b : "None";
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a.convertible_to<int>(), b.convertible_to<int>()) == a.convertible_to<int>() ? "None" : boost::any(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max(a.convertible_to<float>(), b.convertible_to<float>()) == a.convertible_to<float>() ? "None" : b;
    }
    else {
        return "None";
    }
}