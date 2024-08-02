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
        int n1 = a.convert_to<int>();
        float f = stod(b.convert_to<string>());
        if (n1 > f)
            return a;
        else
            return b;
    } else if ((a.type() == typeid(string)) && (b.type() == typeid(int) ||
                                                  b.type() == typeid(float))) {
        string s = a.convert_to<string>();
        float f = b.convert_to<float>();
        if (stod(s) > f)
            return a;
        else
            return b;
    }
    return boost::any(); // default value
}