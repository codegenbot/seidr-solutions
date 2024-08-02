#include <boost/any.hpp>
#include <boost/convert.hpp> // for boost::any->int, float conversion
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a.convert_to<int>(), b.convert_to<int>());
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max(a.convert_to<float>(), b.convert_to<float>());
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convert_to<string>();
        string str2 = b.convert_to<string>();

        if(str1 > str2)
            return a;
        else if(str1 < str2)
            return b;
        else
            return "None";
    } else if ((a.type() == typeid(int) || a.type() == typeid(float)) &&
               (b.type() == typeid(string))) {
        int num = a.convert_to<int>();
        string str = b.convert_to<string>();

        if(stod(str) > num)
            return boost::any(b);
        else
            return "None";
    } else if ((a.type() == typeid(string)) && (b.type() == typeid(int) ||
                                                  b.type() == typeid(float))) {
        string str = a.convert_to<string>();
        int num = b.convert_to<int>();

        if(stod(str) > num)
            return a;
        else
            return "None";
    }
    return "None";
}