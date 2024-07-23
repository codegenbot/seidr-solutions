#include <boost/any.hpp>
#include <string>
#include <algorithm>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        double max = (double)a.convert_to<int>();
        return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int aInt = boost::any_cast<int>(a);
        string bStr = boost::any_cast<string>(b);
        if (aInt > 0 && stod(bStr) > aInt)
            return b;
        else
            return "None";
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        double aDouble = boost::any_cast<double>(a);
        int bInt = boost::any_cast<int>(b);
        if (aDouble > (double)bInt)
            return a;
        else
            return "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string aStr = boost::any_cast<string>(a);
        int bInt = boost::any_cast<int>(b);
        if (stod(aStr) > (double)bInt)
            return a;
        else
            return "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string aStr = boost::any_cast<string>(a);
        double bDouble = boost::any_cast<double>(b);
        if (stod(aStr) > bDouble)
            return a;
        else
            return "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string aStr = boost::any_cast<string>(a);
        string bStr = boost::any_cast<string>(b);
        if (stod(aStr) > stod(bStr))
            return a;
        else
            return "None";
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double aDouble = boost::any_cast<double>(a);
        double bDouble = boost::any_cast<double>(b);
        if (aDouble > bDouble)
            return a;
        else
            return "None";
    }
    return "None";
}