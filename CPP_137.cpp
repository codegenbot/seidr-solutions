#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max(a, boost::any(b.convert_to<int>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convert_to<string>();
        string str2 = b.convert_to<string>();

        size_t pos = str1.find(",");
        if (pos != string::npos) {
            str1 = str1.substr(0, pos);
        }

        pos = str2.find(",");
        if (pos != string::npos) {
            str2 = str2.substr(0, pos);
        }

        return (stof(str1) > stof(str2)) ? a : ((stof(str1) < stof(str2)) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        string str = a.convert_to<string>();

        size_t pos = str.find(",");
        if (pos != string::npos) {
            str = str.substr(0, pos);
        }

        return ((stof(str) > b.convert_to<int>()) ? a : ((stof(str) < b.convert_to<int>()) ? boost::any("None") : a));
    }
    else if (a.type() != typeid(string) && b.type() == typeid(string)) {
        string str = b.convert_to<string>();

        size_t pos = str.find(",");
        if (pos != string::npos) {
            str = str.substr(0, pos);
        }

        return ((b.convert_to<int>() > stof(str)) ? boost::any("None") : ((b.convert_to<int>() < stof(str)) ? a : b));
    }
    else {
        return (a.convert_to<int>() > b.convert_to<int>()) ? a : ((a.convert_to<int>() < b.convert_to<int>()) ? b : boost::any("None"));
    }
}