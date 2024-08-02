#include <boost/any.hpp>
#include <boost/convert.hpp>

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
        else
            return b;
    } else if ((a.type() == typeid(int) || a.type() == typeid(float)) &&
               (b.type() == typeid(string))) {
        float num = stod(b.convert_to<string>());
        return max(a.convert_to<int>(), num) ? boost::any(a) : boost::any(b);
    } else if ((a.type() == typeid(string)) && (b.type() == typeid(int) ||
                                                  b.type() == typeid(float))) {
        int num = a.convert_to<string>().stod();
        return max(num, b.convert_to<int>()) ? a : b;
    }
    return "None";
}