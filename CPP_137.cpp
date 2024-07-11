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
            float f1 = stof(str.substr(0, pos));
            float f2 = stof(str.substr(pos + 1));
            return max(f1, f2);
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = (string)a.convert_to<string>();
        size_t pos1 = str1.find(',');
        string str2 = (string)b.convert_to<string>();
        size_t pos2 = str2.find(',');

        if (pos1 != string::npos && pos2 != string::npos) {
            float f1 = stof(str1.substr(0, pos1));
            float f2 = stof(str2.substr(0, pos2));
            return max(f1, f2);
        }
        else if (pos1 == string::npos && pos2 == string::npos) {
            return "None";
        }
    }

    return b;
}