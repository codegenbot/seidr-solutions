#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert<int>(), (float)b.convert<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)b.convert<string>();
        size_t pos = str.find(',');
        if (pos != string::npos) {
            str = str.substr(0, pos);
        }
        return max((float)a.convert<float>(), stof(str));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        size_t a_pos = (string)a.convert<string>().find(',');
        size_t b_pos = (string)b.convert<string>().find(',');

        string str1 = (a_pos != string::npos) ? ((string)a.convert<string>()).substr(0, a_pos) : (string)a.convert<string>();
        string str2 = (b_pos != string::npos) ? ((string)b.convert<string>()).substr(0, b_pos) : (string)b.convert<string>();

        return max(stof(str1), stof(str2));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        size_t pos = (string)b.convert<string>().find(',');
        if (pos != string::npos) {
            (string)b.convert<string>() = (string)b.convert<string>().substr(0, pos);
        }
        return max((int)a.convert<int>(), stof((string)b.convert<string>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        size_t pos = (string)a.convert<string>().find(',');
        if (pos != string::npos) {
            (string)a.convert<string>() = (string)a.convert<string>().substr(0, pos);
        }
        return max(stof((string)a.convert<string>()), (int)b.convert<int>());
    }

    return boost::any("None");
}