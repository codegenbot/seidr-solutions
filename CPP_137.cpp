```cpp
#include <boost/any_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)boost::any_cast<float>(b) > (int)a ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)boost::any_cast<double>(b) > (int)a ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<float>(b) ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<double>(b) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float b_float = boost::any_cast<float>(b);
        return to_string(b_float) > a ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double b_double = boost::any_cast<double>(b);
        return to_string(b_double) > a ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int b_int = boost::any_cast<int>(b);
        return to_string(b_int) > a ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return max(a, b);
    }
    else {
        return "None";
    }
}