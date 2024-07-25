#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a.convert<int>(), b.convert<int>());
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max(a.convert<float>(), b.convert<float>());
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        return max(str1, str2);
    } else if ((a.type() == typeid(int) && b.type() == typeid(float)) ||
               (a.type() == typeid(float) && b.type() == typeid(int))) {
        if (any_cast<int>(a) > any_cast<float>(b))
            return a;
        else
            return b;
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(float) || b.type() == typeid(double))) {
        string str = any_cast<string>(a);
        double num = any_cast<double>(b);
        return max(str, to_string(num));
    } else if ((a.type() == typeid(int) && b.type() == typeid(string)) ||
               (a.type() == typeid(string) && b.type() == typeid(int))) {
        if (any_cast<int>(a) > any_cast<string>(b))
            return a;
        else
            return b;
    } else {
        return boost::any("None");
    }
}