#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (b.convert_to<string>()) > to_string((int)a.convert_to<int>()) ? b : "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)b.convert_to<string>();
        size_t pos = str.find(',');
        float num = stof(str.substr(0, pos));
        return (float)a.convert_to<float>() > num ? a : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (string)a.convert_to<string>() > to_string((int)b.convert_to<int>()) ? a : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = (string)a.convert_to<string>();
        size_t pos = str.find(',');
        float num = stof(str.substr(0, pos));
        return (float)b.convert_to<float>() > num ? b : "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (string)a.convert_to<string>() > (string)b.convert_to<string>() ? a : "None";
    }
    else {
        return "None";
    }
}