#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a > (float) b ? a : (b.convert_to<boost::any>()).type().name();
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int) a > (double) b ? a : (b.convert_to<boost::any>()).type().name();
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float) a > (int) b ? a : (b.convert_to<boost::any>()).type().name();
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double) a > (int) b ? a : (b.convert_to<boost::any>()).type().name();
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(a);
        float f = boost::any_cast<float>(b);
        return stof(str) > f ? a : (b.convert_to<boost::any>()).type().name();
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str = boost::any_cast<string>(a);
        double d = boost::any_cast<double>(b);
        return stod(str) > d ? a : (b.convert_to<boost::any>()).type().name();
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int i = boost::any_cast<int>(b);
        return stof(str) > i ? a : "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float f = boost::any_cast<float>(a);
        string str = boost::any_cast<string>(b);
        return f > stod(str) ? a : (b.convert_to<boost::any>()).type().name();
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double d = boost::any_cast<double>(a);
        string str = boost::any_cast<string>(b);
        return d > stod(str) ? a : (b.convert_to<boost::any>()).type().name();
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = boost::any_cast<int>(a);
        string str = boost::any_cast<string>(b);
        return i > stod(str) ? a : "None";
    }
    else {
        return "None";
    }
}