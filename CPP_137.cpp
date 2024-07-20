#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = stoi(any_cast<string>(b));
        return (int)a > x ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (float)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int x = any_cast<int>(a);
        return x > (int)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float y = stof(any_cast<string>(b));
        return stof(any_cast<string>(a)) > y ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double z = stod(any_cast<string>(b));
        return stod(any_cast<string>(a)) > z ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = stoi(any_cast<string>(b));
        return (int)a > x ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float y = stof(any_cast<string>(b));
        return (float)a > y ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double z = stod(any_cast<string>(b));
        return (double)a > z ? a : b;
    }
    else {
        return boost::any("None");
    }
}