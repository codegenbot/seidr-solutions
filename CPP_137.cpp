#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        int num = boost::any_cast<int>(a);
        if (num > 0) {
            return "None";
        } else {
            return a;
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (float)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int num = boost::any_cast<int>(b);
        if (num > 0) {
            return "None";
        } else {
            return a;
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str1 = boost::any_cast<string>(a);
        float num = boost::any_cast<float>(b);
        if (num > 0) {
            return "None";
        } else {
            return a;
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str1 = boost::any_cast<string>(a);
        double num = boost::any_cast<double>(b);
        if (num > 0) {
            return "None";
        } else {
            return a;
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (str1 > str2) {
            return a;
        } else if (str1 < str2) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(float)) {
        return (double)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        double num = boost::any_cast<double>(a);
        if (num > 0) {
            return "None";
        } else {
            return a;
        }
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return (double)a > (double)b ? a : b;
    }
    return boost::any("None");
}