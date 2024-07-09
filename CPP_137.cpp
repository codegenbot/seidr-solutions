```cpp
#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a.get<int>() > b.get<int>() ? a : b;
    } else if ((a.type() == typeid(float) || a.type() == typeid(double)) &&
               (b.type() == typeid(float) || b.type() == typeid(double))) {
        return a.get<double>() > b.get<double>() ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return str1 > str2 ? a : b;
    } else if (a.type() != typeid(int) && a.type() != typeid(float) &&
               a.type() != typeid(double) && a.type() == typeid(string)) {
        return "None";
    } else if (b.type() != typeid(int) && b.type() != typeid(float) &&
               b.type() != typeid(double) && b.type() == typeid(string)) {
        return "None";
    }
    return "None";
}