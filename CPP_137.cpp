#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    double da, db;
    std::string sa, sb;

    try {
        da = boost::any_cast<double>(a);
        db = boost::any_cast<double>(b);
    } catch (...) {
        try {
            sa = boost::any_cast<std::string>(a);
            sb = boost::any_cast<std::string>(b);
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