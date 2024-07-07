#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <boost/convert.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return (ai > bf) ? a : ((bf > ai) ? b : boost::any(string("None")));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int ai = boost::any_cast<int>(a);
        string bs = boost::any_cast<string>(b);
        return (stoi(bs) > ai) ? b : ((ai > stoi(bs)) ? a : boost::any(string("None")));
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float af = boost::any_cast<float>(a);
        string bs = boost::any_cast<string>(b);
        return (stof(bs) > af) ? b : ((af > stof(bs)) ? a : boost::any(string("None")));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string as = boost::any_cast<string>(a);
        int bi = boost::any_cast<int>(b);
        return (stod(as) > bi) ? a : ((bi > stod(as)) ? b : boost::any(string("None")));
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string as = boost::any_cast<string>(a);
        float bf = boost::any_cast<float>(b);
        return (stod(as) > bf) ? a : ((bf > stod(as)) ? b : boost::any(string("None")));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string as = boost::any_cast<string>(a);
        string bs = boost::any_cast<string>(b);
        return (stod(as) > stod(bs)) ? a : ((stod(bs) > stod(as)) ? b : boost::any(string("None")));
    }
    return a;
}