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
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);

        int i = 0, j = 0;
        while (i < str1.length() && j < str2.length()) {
            if (str1[i] != str2[j]) {
                return a > b ? a : b;
            }
            i++;
            j++;
        }

        return "None";
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        string str = any_cast<string>(a);
        int num = any_cast<int>(b);

        istringstream iss(str);
        float f;
        iss >> noskipws >> f;

        return f > num ? a : boost::any(b);
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)) {
        int num = any_cast<int>(a);
        string str = any_cast<string>(b);

        istringstream iss(str);
        float f;
        iss >> noskipws >> f;

        return f > num ? boost::any(b) : a;
    }
    else {
        return "None";
    }
}