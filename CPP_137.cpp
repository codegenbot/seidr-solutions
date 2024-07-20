#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max((float)a.convert_to<float>(), (int)b.convert_to<int>());
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = a.convert_to<string>();
        string strB = b.convert_to<string>();

        int pos1 = strA.find(',');
        int pos2 = strB.find(',');

        float numA = stof(strA.substr(0, pos1));
        float numB = stof(strB.substr(0, pos2));

        if (numA > numB) {
            return a;
        }
        else if (numB > numA) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        string str = a.convert_to<string>();

        int pos = str.find(',');
        float num = stof(str.substr(0, pos));

        if ((int)b.convert_to<int>() > num || (float)b.convert_to<float>() > num) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (b.type() == typeid(string) && a.type() != typeid(string)) {
        string str = b.convert_to<string>();

        int pos = str.find(',');
        float num = stof(str.substr(0, pos));

        if ((int)a.convert_to<int>() > num || (float)a.convert_to<float>() > num) {
            return a;
        }
        else {
            return boost::any("None");
        }
    }

    return boost::any("None");
}