#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any(b);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str = a.convert<string>();
        double d = boost::any_cast<double>(b);
        if (d > stol(str)) {
            return b;
        } 
        else {
            return a;
        }
    } 
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convert<string>();
        string str2 = boost::any_cast<string>(b);
        if (stod(str2) > stol(str1)) {
            return b;
        } 
        else {
            if (stod(str2) == stol(str1))
                return boost::any("None");
            else
                return a;
        }
    }
    else if ((a.type() == typeid(double) && b.type() == typeid(string))) {
        string str = boost::any_cast<string>(b);
        double d = boost::any_cast<double>(a);
        if (d > stol(str)) {
            return a;
        } 
        else {
            return b;
        }
    }
    else if ((a.type() == typeid(double) && b.type() == typeid(int))) {
        int i = boost::any_cast<int>(b);
        double d = boost::any_cast<double>(a);
        if (d > i) {
            return a;
        } 
        else {
            return b;
        }
    }
    else {
        if (boost::any_cast<int>(a) == boost::any_cast<int>(b)) {
            return boost::any("None");
        }
        else if (boost::any_cast<double>(a) > boost::any_cast<double>(b))
            return a;
       	else
            return b;
    }
}