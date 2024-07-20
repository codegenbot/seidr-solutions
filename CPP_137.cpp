#include <boost/any_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    double da = 0;
    double db = 0;

    if (boost::any_cast<double>(a)) {
        da = boost::any_cast<double>(a);
    } else if (boost::any_cast<std::string>(a)) {
        std::istringstream iss(std::any_cast<std::string>(a));
        iss >> da;
    }

    if (boost::any_cast<double>(b)) {
        db = boost::any_cast<double>(b);
    } else if (boost::any_cast<std::string>(b)) {
        std::istringstream iss(std::any_cast<std::string>(b));
        iss >> db;
    }

    if (da > db) {
        return a;
    } else if (db > da) {
        return b;
    } else {
        return boost::any("None");
    }
}