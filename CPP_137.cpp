#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<double>(a)) {
        double da = any_cast<double>(a);
        double db = any_cast<double>(b);

        if (da > db)
            return a;
        else if (db > da)
            return b;

        return "None";
    } else if (is_any_of<std::string>(a)) {
        std::string sa = any_cast<std::string>(a);
        std::string sb = any_cast<std::string>(b);

        if (sa > sb)
            return a;
        else if (sb > sa)
            return b;

        return "None";
    }

    return "None";
}