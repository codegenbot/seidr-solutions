```cpp
#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_castable<double>(a)) {
        double da = get<double>(a);
        if (is_any_castable<double>(b)) {
            double db = get<double>(b);

            if (da > db)
                return a;
            else if (db > da)
                return b;

            return boost::any("None");
        } else {
            string sb = boost::any_cast<string>(b);
            double db = stod(sb);

            if (da > db)
                return a;
            else if (db > da)
                return b;

            return boost::any("None");
        }
    } else {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);

        double da = stod(sa);
        double db = stod(sb);

        if (da > db)
            return a;
        else if (db > da)
            return b;

        return boost::any("None");
    }
}