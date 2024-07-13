#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
#include<boost/multi_io.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(boost::any_cast<int>(a), boost::any_cast<int>(b));
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return (boost::any_cast<double>(a) > boost::any_cast<double>(b)) ? a : b;
    } else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        if (strA > strB)
            return a;
        else if (strA < strB)
            return b;
        else
            return boost::any("None");
    } else {
        return boost::any("None");
    }
}