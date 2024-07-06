```cpp
#include <boost/any.hpp>
#include <string>
#include <limits>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int) a.convert_to<int>() > (int) b.convert_to<int>() ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a.convert_to<int>() > (float) b.convert_to<float>() ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int) a.convert_to<int>() > (double) b.convert_to<double>() ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (float) a.convert_to<float>() > (float) b.convert_to<float>() ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (float) a.convert_to<float>() > (double) b.convert_to<double>() ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return (double) a.convert_to<double>() > (double) b.convert_to<double>() ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = any_cast<string>(a);
        string strB = any_cast<string>(b);
        return stod(strA) > stod(strB) ? a : b;
    }
    return "None";
}