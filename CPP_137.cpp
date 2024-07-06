#include <boost/any.hpp>
#include <string>
#include <sstream>

using namespace boost;

bool is_numeric(boost::any a) {
    try {
        double tmp = get<double>(a);
        return true;
    } catch (...) {
        return false;
    }
}

boost::any compare_one(boost::any a, boost::any b) {
    if (is_numeric(a)) {
        if (is_numeric(b)) {
            double da = boost::any_cast<double>(a);
            double db = boost::any_cast<double>(b);

            if (da > db)
                return a;
            else if (db > da)
                return b;

            return "None";
        } else {
            std::string sa = boost::any_cast<std::string>(a);
            std::string sb = boost::any_cast<std::string>(b);

            double da = std::stod(sa);
            double db = std::stod(sb);

            if (da > db)
                return a;
            else if (db > da)
                return b;

            return "None";
        }
    } else {
        std::string sa = boost::any_cast<std::string>(a);
        std::string sb = boost::any_cast<std::string>(b);

        double da = std::stod(sa);
        double db = std::stod(sb);

        if (da > db)
            return a;
        else if (db > da)
            return b;

        return "None";
    }
}