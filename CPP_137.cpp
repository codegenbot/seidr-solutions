#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = any_cast<string>(a);
        string strB = any_cast<string>(b);
        double numA = stod(strA);
        double numB = stod(strB);
        if (numA > numB)
            return a;
        else if (numA < numB)
            return b;
        else
            return boost::any("None");
    }
    else {
        return boost::any("None");
    }
}