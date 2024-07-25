#include <boost/any_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    double da, db;
    std::string sa, sb;

    try {
        da = boost::any_cast<double>(a);
        db = boost::any_cast<double>(b);

        if (da > db)
            return a;
        else if (db > da)
            return b;
        else
            return "None";
    } catch (...) {
        try {
            sa = boost::any_cast<std::string>(a);
            sb = boost::any_cast<std::string>(b);

            if (sa.compare(sb) > 0)
                return a;
            else if (sb.length() > sa.length())
                return b;
            else
                return "None";
        } catch (...) {
            // If neither cast worked, it means the values are not numbers or strings
            return "None";
        }
    }
}