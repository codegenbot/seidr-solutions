#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        if (get<int>(a) > get<float>(b))
            return a;
        else if (get<float>(b) > get<int>(a))
            return b;
        else
            return boost::any("None");
    } 
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if (get<int>(a) > stod(get<string>(b)))
            return a;
        else if (stod(get<string>(b)) > get<int>(a))
            return b;
        else
            return boost::any("None");
    } 
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        if (get<float>(a) > stod(get<string>(b)))
            return a;
        else if (stod(get<string>(b)) > get<float>(a))
            return b;
        else
            return boost::any("None");
    } 
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (stod(get<string>(a)) > get<int>(b))
            return a;
        else if (get<int>(b) > stod(get<string>(a)))
            return b;
        else
            return boost::any("None");
    } 
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (stod(get<string>(a)) > get<float>(b))
            return a;
        else if (get<float>(b) > stod(get<string>(a)))
            return b;
        else
            return boost::any("None");
    } 
    else {
        return boost::any("None");
    }
}