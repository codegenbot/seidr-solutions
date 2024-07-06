#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any(a) && is_any(b)) {
        return "Both values are not numeric";
    } else if (!is_numeric(a) && !is_numeric(b)) {
        string sa = any_cast<string>(a);
        string sb = any_cast<string>(b);

        double da = stod(sa);
        double db = stod(sb);

        if (da > db)
            return a;
        else if (db > da)
            return b;

        return boost::any("None");
    } else {
        if (!is_numeric(a)) {
            string sa = any_cast<string>(a);
            double da = stod(sa);
            return (da > get<double>(b)) ? a : b;
        } else {
            if (get<double>(a) > get<double>(b))
                return a;
            else
                return b;
        }
    }
}