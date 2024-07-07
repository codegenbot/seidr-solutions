```
#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return (ai > bf) ? a : ((bf > ai) ? b : b);
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int ai = boost::any_cast<int>(a);
        string bs = boost::any_cast<string>(b);
        return (stoi(bs) > ai) ? b : ((ai > stoi(bs)) ? a : b);
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float af = boost::any_cast<float>(a);
        string bs = boost::any_cast<string>(b);
        return (stof(bs) > af) ? b : ((af > stof(bs)) ? a : b);
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string as = boost::any_cast<string>(a);
        int bi = boost::any_cast<int>(b);
        return (stof(as) > bi) ? a : ((bi > stof(as)) ? b : b);
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string as = boost::any_cast<string>(a);
        float bf = boost::any_cast<float>(b);
        return (stof(as) > bf) ? a : ((bf > stof(as)) ? b : b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string as = boost::any_cast<string>(a);
        string bs = boost::any_cast<string>(b);
        return (stof(as) > stof(bs)) ? a : ((stof(bs) > stof(as)) ? b : b);
    }
    return a;
}