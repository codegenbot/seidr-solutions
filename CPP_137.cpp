#include <boost/any.hpp>
#include <boost/convert.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int)) {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        if (ai > bi) {
            return a;
        } else if (ai < bi) {
            return b;
        } else {
            return boost::any(typeid(int));
        }
    } else if (a.type() == typeid(double)) {
        double ad = boost::any_cast<double>(a);
        double bd = boost::any_cast<double>(b);
        if (ad > bd) {
            return a;
        } else if (ad < bd) {
            return b;
        } else {
            return boost::any(typeid(double));
        }
    }

    return boost::any(typeid(int));