#include <boost/any.hpp>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max(a.convert_to<float>(), b.convert_to<int>());
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (a.convert_to<string>() > b.convert_to<string>()) {
            return a;
        }
        else if (b.convert_to<string>() > a.convert_to<string>()) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        string str = to_string(b.convert_to<int>() > b.convert_to<float>() ? b.convert_to<float>() : b.convert_to<int>());
        return str;
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)) {
        string str = to_string(a.convert_to<int>() > a.convert_to<float>() ? a.convert_to<float>() : a.convert_to<int>());
        return str;
    }
    else {
        return boost::any("None");
    }
}