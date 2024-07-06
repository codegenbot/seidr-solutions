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
    }
    return a; 
}