#include<iostream>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int aInt = boost::any_cast<int>(a);
        int bInt = boost::any_cast<int>(b);
        if (aInt == bInt) {
            return boost::any();
        } else if (aInt > bInt) {
            return aInt;
        } else {
            return bInt;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float aFloat = boost::any_cast<float>(a);
        float bFloat = boost::any_cast<float>(b);
        if (aFloat == bFloat) {
            return boost::any();
        } else if (aFloat > bFloat) {
            return aFloat;
        } else {
            return bFloat;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string aString = boost::any_cast<string>(a);
        string bString = boost::any_cast<string>(b);
        if (aString == bString) {
            return boost::any();
        } else if (aString > bString) {
            return aString;
        } else {
            return bString;
        }
    } else {
        return boost::any();
    }
}