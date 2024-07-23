#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)a.convert_to<string>();
        float f = (float)b.convert_to<float>();
        if (str.find('.') != string::npos || str.find(',') != string::npos)
            return max(f, stof(str));
        else
            return max(f, stol(str));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = (string)a.convert_to<string>();
        string str2 = (string)b.convert_to<string>();
        if (str1.find('.') != string::npos || str1.find(',') != string::npos)
            return max(stof(str1), stof(str2));
        else
            return max(stoi(str1), stoi(str2));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any((int)max((int)a.convert_to<int>(), (int)b.convert_to<int>()));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max((float)a.convert_to<float>(), (float)b.convert_to<float>());
    }
    else
        return boost::any("None");
}