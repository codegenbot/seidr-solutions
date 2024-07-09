#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return b;
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a;
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return "None";
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (stod(b.cast<string>()) > stod(a.cast<string>())) {
            return b;
        } else if (stod(b.cast<string>()) < stod(a.cast<string>())) {
            return a;
        } else {
            return "None";
        }
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stod(b.cast<string>().substr(1,-2)) > stod(a.cast<string>().substr(1,-2))) {
            return b;
        } else if (stod(b.cast<string>().substr(1,-2)) < stod(a.cast<string>().substr(1,-2))) {
            return a;
        } else {
            return "None";
        }
    }
    return "None"; // default case
}