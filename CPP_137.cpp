#include <boost/any.hpp>
#include <string>
#include <iostream>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        
        if (str1 > str2) {
            return a;
        }
        else if (str1 < str2) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if ((a.type() == typeid(int) && b.type() == typeid(string)) || 
             (a.type() == typeid(string) && b.type() == typeid(int))) {
        string str = boost::any_cast<string>(b);
        
        if (boost::any_cast<int>(a) > boost::lexical_cast<int>(str)) {
            return a;
        }
        else if (boost::any_cast<int>(a) < boost::lexical_cast<int>(str)) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else {
        return boost::any("None");
    }
}