#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string s = (string)b.convert_to<string>();
        size_t pos = s.find(',');
        if (pos != string::npos) {
            s.erase(pos, 1);
        }
        return max((float)a.convert_to<float>(), stof(s));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if ((string)a.convert_to<string>() > (string)b.convert_to<string>()) {
            return a;
        } else if ((string)a.convert_to<string()] < (string)b.convert_to<string>()) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s = (string)b.convert_to<string>();
        size_t pos = s.find(',');
        if (pos != string::npos) {
            s.erase(pos, 1);
        }
        return max((int)a.convert_to<int>(), stof(s));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int i = (int)b.convert_to<int>();
        size_t pos = (string)a.find(',');
        if (pos != string::npos) {
            (string)a.erase(pos, 1);
        }
        return max(stof((string)a), i);
    } else {
        return boost::any("None");
    }
}