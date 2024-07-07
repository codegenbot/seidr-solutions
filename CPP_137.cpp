#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a.convert_to<int>(), b.convert_to<int>());
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max(a.convert_to<float>(), b.convert_to<float>());
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);

        int num1, num2;
        if (sscanf(str1.c_str(), "%d", &num1) == 1 && sscanf(str2.c_str(), "%d", &num2) == 1) {
            return max(to_string(num1), to_string(num2));
        } else if (sscanf(str1.c_str(), "%f", &num1) == 1 && sscanf(str2.c_str(), "%f", &num2) == 1) {
            return max(to_string(num1), to_string(num2));
        }

        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return boost::any("None");
    } else {
        return boost::any("None");
    }
}