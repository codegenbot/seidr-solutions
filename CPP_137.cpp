#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        double db = boost::any_cast<double>(b);
        if (db > (double)stoi(sa))
            return b;
        else
            return a;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double da = boost::any_cast<double>(a);
        string sb = boost::any_cast<string>(b);
        if (da > stod(sb))
            return b;
        else
            return a;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string sa = boost::any_cast<string>(a);
        double db = boost::any_cast<double>(b);
        if (stod(sa) > db)
            return a;
        else
            return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        if (stod(sa) > stod(sb))
            return a;
        else if (stod(sa) < stod(sb))
            return b;
        else
            return boost::any("None");
    } else {
        return boost::any("None");
    }
}