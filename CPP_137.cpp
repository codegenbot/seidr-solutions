#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return boost::any((ai > bf) ? a : ((bf > ai) ? b : boost::any((ai >= bf))));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int ai = boost::any_cast<int>(a);
        string bs = boost::any_cast<string>(b);
        return boost::any((ai > stoi(bs)) ? a : ((stoi(bs) > ai) ? b : boost::any((ai >= stoi(bs)))));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float af = boost::any_cast<float>(a);
        int bi = boost::any_cast<int>(b);
        return boost::any((af > bi) ? a : ((bi > af) ? b : boost::any((af >= bi)))));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float af = boost::any_cast<float>(a);
        string bs = boost::any_cast<string>(b);
        return boost::any((af > stod(bs)) ? a : ((stod(bs) > af) ? b : boost::any((af >= stod(bs))))));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string as = boost::any_cast<string>(a);
        int bi = boost::any_cast<int>(b);
        return boost::any((stod(as) > bi) ? a : ((bi > stod(as)) ? b : boost::any((stod(as) >= bi)))));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string as = boost::any_cast<string>(a);
        float bf = boost::any_cast<float>(b);
        return boost::any((stod(as) > bf) ? a : ((bf > stod(as)) ? b : boost::any((stod(as) >= bf)))));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string as = boost::any_cast<string>(a);
        string bs = boost::any_cast<string>(b);
        return boost::any((stod(as) > stod(bs)) ? a : ((stod(bs) > stod(as)) ? b : boost::any((stod(as) >= stod(bs))))));
    }
    else
        return a;
}