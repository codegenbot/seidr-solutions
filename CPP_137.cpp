#include <boost/any.hpp>
#include <string>
#include <algorithm>

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

        return max(str1, str2);
    }
    else if (a.type() == typeid(string)) {
        string str = a.convert_to<string>();
        size_t pos = str.find(",");
        if (pos != string::npos) {
            str = str.substr(0, pos);
        }

        if (b.type() == typeid(int)) {
            return max(str, boost::any(b));
        }
    }
    else if (b.type() == typeid(string)) {
        string str = b.convert_to<string>();
        size_t pos = str.find(",");
        if (pos != string::npos) {
            str = str.substr(0, pos);
        }

        if (a.type() == typeid(int)) {
            return max(a, boost::any(str));
        }
    }

    return boost::any("None");
}