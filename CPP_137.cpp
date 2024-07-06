```cpp
#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a.convert_to<int>() > (float) b.convert_to<float>() ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int) a.convert_to<int>() > (double) b.convert_to<double>() ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (float) a.convert_to<float>() > (double) b.convert_to<double>() ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = any_cast<string>(a);
        string strB = any_cast<string>(b);
        return stof(strA) > stod(strB) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int numA = any_cast<int>(a);
        double numB = stod(any_cast<string>(b));
        return numA > numB ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double numA = any_cast<double>(a);
        int numB = any_cast<int>(b);
        return numA > numB ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        double numA = stod(any_cast<string>(a));
        int numB = any_cast<int>(b);
        return numA > numB ? a : b;
    }
    return "None";
}