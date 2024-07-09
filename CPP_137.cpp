```
#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <sstream>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return bf > ai ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int ai = boost::any_cast<int>(a);
        istringstream iss(boost::any_cast<string>(b));
        float bf;
        iss >> bf;
        return bf > ai ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float af = boost::any_cast<float>(a);
        int bi = boost::any_cast<int>(b);
        return af > bi ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string as = boost::any_cast<string>(a);
        istringstream iss(as);
        float af;
        iss >> af;
        return af > boost::any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string as = boost::any_cast<string>(a);
        istringstream iss(as);
        int bi;
        iss >> bi;
        return af > bi ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float af = boost::any_cast<float>(a);
        string bs = boost::any_cast<string>(b);
        istringstream iss(bs);
        int bi;
        iss >> bi;
        return af > bi ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int ai = boost::any_cast<int>(a);
        string bs = boost::any_cast<string>(b);
        istringstream iss(bs);
        float bf;
        iss >> bf;
        return bf > ai ? b : a;
    } else if (boost::any_cast<float>(a) == boost::any_cast<float>(b)) {
        return "None";
    }
    return a;
}