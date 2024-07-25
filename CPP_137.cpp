#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        int num;
        istringstream iss(s);
        iss >> num;
        return max(a, boost::any(num));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any(max(boost::any_cast<int>(a), boost::any_cast<int>(b)));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string s = boost::any_cast<string>(a);
        int num;
        istringstream iss(s);
        iss >> num;
        return max(boost::any(num), b);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        double d;
        istringstream iss(s);
        iss >> d;
        return max(a, boost::any(d));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (boost::any_cast<string>(a) > boost::any_cast<string>(b))
            return a;
        else if (boost::any_cast<string>(a) < boost::any_cast<string>(b))
            return b;
        else
            return boost::any("None");
    }
    else {
        return boost::any("None");
    }
}