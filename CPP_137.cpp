#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)b.convert_to<string>();
        size_t pos = str.find(',');
        if (pos != string::npos) {
            return max((float)a.convert_to<float>(), stof(str.substr(0, pos)));
        } else {
            return max((float)a.convert_to<float>(), stod(str));
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = (string)a.convert_to<string>();
        size_t pos1 = str1.find(',');
        string str2 = (string)b.convert_to<string>();
        size_t pos2 = str2.find(',');

        if (pos1 != string::npos && pos2 != string::npos) {
            return max(str1.substr(0, pos1), str2.substr(0, pos2));
        } else if (pos1 == string::npos && pos2 != string::npos) {
            return max(str1, str2.substr(0, pos2));
        } else if (pos1 != string::npos && pos2 == string::npos) {
            return max(str1.substr(0, pos1), str2);
        } else {
            return max(str1, str2);
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any("None");
    }

    return a > b ? a : b;
}