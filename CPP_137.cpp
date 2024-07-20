#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return max((float)a.convert_to<float>(), stof(b.convert_to<string>().c_str()));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convert_to<string>();
        string str2 = b.convert_to<string>();
        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = b.convert_to<string>();
        int num = stoi(str);
        if ((int)a.convert_to<int>() > num)
            return a;
        else if ((int)a.convert_to<int>() < num)
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int num = (int)b.convert_to<int>();
        string str = a.convert_to<string>();
        if (stof(str.c_str()) > num)
            return a;
        else if (stof(str.c_str()) < num)
            return b;
        else
            return boost::any("None");
    } else {
        return boost::any("None");
    }
}