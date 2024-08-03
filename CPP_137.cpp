#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    double da, db;
    string sa, sb;

    try {
        da = boost::any_cast<double>(a);
        db = boost::any_cast<double>(b);
    } catch (...) {
        try {
            sa = boost::any_cast<string>(a);
            sb = boost::any_cast<string>(b);
        } catch (...) {
            return a;
        }
    }

    if (da > db) {
        return a;
    } else if (db > da) {
        return b;
    } else {
        return a;
    }
}