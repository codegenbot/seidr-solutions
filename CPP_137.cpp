```cpp
#include <boost/any.hpp>
#include <boost/convert.hpp>

using namespace boost;

bool is_numeric(boost::any a) {
    try {
        get<double>(a);
        return true;
    } catch (...) {
        return false;
    }
}

boost::any compare_one(boost::any a, boost::any b) {
    if (is_numeric(a)) {
        if (is_numeric(b)) {
            double da = get<double>(a);
            double db = get<double>(b);

            if (da > db)
                return a;
            else if (db > da)
                return b;

            return "None";
        } else {
            std::string sa = boost::any_cast<std::string>(a);
            std::string sb = boost::any_cast<std::string>(b);

            double da = boost::stod(sa);
            double db = boost::stod(sb);

            if (da > db)
                return a;
            else if (db > da)
                return b;

            return "None";
        }
    } else {
        std::string sa = boost::any_cast<std::string>(a);
        std::string sb = boost::any_cast<std::string>(b);

        double da = boost::stod(sa);
        double db = boost::stod(sb);

        if (da > db)
            return a;
        else if (db > da)
            return b;

        return "None";
    }
}