#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(double)) {
        double da = any_cast<double>(a);
        double db = any_cast<double>(b);

        if (da > db)
            return a;
        else if (db > da)
            return b;

        return "None";
    } else if (is_any_of<a>(string)) {
        string sa = any_cast<string>(a);
        string sb = any_cast<string>(b);

        if (stod(sa) > stod(sb))
            return a;
        else if (stod(sb) > stod(sa))
            return b;

        return "None";
    }

    return "None";
}