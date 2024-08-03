#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

any compare_one(any a, any b) {
    if (a.type() == type_id<int>() && b.type() == type_id<double>()) {
        return b;
    }
    else if (a.type() == type_id<double>() && b.type() == type_id<int>()) {
        return b;
    }
    else if (a.type() == type_id<string>() && b.type() == type_id<string>()) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        
        if (str1 > str2) {
            return a;
        }
        else if (str1 < str2) {
            return b;
        }
        else {
            return "None";
        }
    }
    else if ((a.type() == type_id<int>() && b.type() == type_id<string>()) || 
             (a.type() == type_id<string>() && b.type() == type_id<int>())) {
        string str = any_cast<string>(b);
        
        if (any_cast<int>(a) > lexical_cast<int>(str)) {
            return a;
        }
        else if (any_cast<int>(a) < lexical_cast<int>(str)) {
            return b;
        }
        else {
            return "None";
        }
    }
    else {
        return "None";
    }
}