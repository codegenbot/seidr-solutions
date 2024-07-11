#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)b.convert_to<string>();
        size_t pos = str.find(',');
        if (pos != string::npos) {
            str = str.substr(0, pos);
        }
        return max((float)a.convert_to<float>(), stof(str));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        size_t pos1 = (string)a.convert_to<string>().find(',');
        size_t pos2 = (string)b.convert_to<string>().find(',');
        string str1 = (pos1 != string::npos) ? (string)a.convert_to<string>().substr(0, pos1) : (string)a.convert_to<string>();
        string str2 = (pos2 != string::npos) ? (string)b.convert_to<string>().substr(0, pos2) : (string)b.convert_to<string>();
        return max(stof(str1), stof(str2));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        size_t pos = (string)b.convert_to<string>().find(',');
        string str = (pos != string::npos) ? (string)b.convert_to<string>().substr(0, pos) : (string)b.convert_to<string>();
        return max((int)a.convert_to<int>(), stof(str));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        size_t pos = (string)a.convert_to<string>().find(',');
        string str = (pos != string::npos) ? (string)a.convert_to<string>().substr(0, pos) : (string)a.convert_to<string>();
        return max(stof(str), (int)b.convert_to<int>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max((float)a.convert_to<float>(), (float)b.convert_to<float>());
    }
    else {
        return boost::any("None");
    }
}