#include <boost/any.hpp>
using namespace boost;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        int ai = boost::any_cast<int>(a);
        double bi = boost::any_cast<double>(b);
        return (ai > bi) ? a : ((bi > ai) ? b : boost::any(typeid(string)));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int ai = boost::any_cast<int>(a);
        string bs = boost::any_cast<string>(b);
        return (ai > stoi(bs)) ? a : ((stoi(bs) > ai) ? b : boost::any(typeid(string)));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        double ai = boost::any_cast<double>(a);
        int bi = boost::any_cast<int>(b);
        return (ai > bi) ? a : ((bi > ai) ? b : boost::any(typeid(string)));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double ai = boost::any_cast<double>(a);
        string bs = boost::any_cast<string>(b);
        return (ai > stod(bs)) ? a : ((stod(bs) > ai) ? b : boost::any(typeid(string)));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string as = boost::any_cast<string>(a);
        int bi = boost::any_cast<int>(b);
        return (stod(as) > bi) ? a : ((bi > stod(as)) ? b : boost::any(typeid(string)));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string as = boost::any_cast<string>(a);
        double bi = boost::any_cast<double>(b);
        return (stod(as) > bi) ? a : ((bi > stod(as)) ? b : boost::any(typeid(string)));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string as = boost::any_cast<string>(a);
        string bs = boost::any_cast<string>(b);
        return (stod(as) > stod(bs)) ? a : ((stod(bs) > stod(as)) ? b : boost::any(typeid(string)));
    }
    else {
        return boost::any(typeid(string));
    }
}