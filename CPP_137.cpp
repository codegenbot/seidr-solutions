#include <boost/any.hpp>
#include <boost/convert.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a.convert_to<int>(), b.convert_to<int>());
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max(a.convert_to<float>(), b.convert_to<float>());
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = a.convert_to<string>();
        string s2 = b.convert_to<string>();
        if (s1 > s2)
            return a;
        else
            return b;
    } else if ((a.type() == typeid(int) || a.type() == typeid(float)) &&
               (b.type() == typeid(string))) {
        int num = stod(b.convert_to<string>());
        if (a.convert_to<int>() > num)
            return a;
        else
            return b;
    } else if ((a.type() == typeid(string)) && (b.type() == typeid(int) ||
                                                  b.type() == typeid(float))) {
        int num = a.convert_to<int>();
        if (num > stod(b.convert_to<string>()))
            return a;
        else
            return b;
    }
    return boost::any();
}