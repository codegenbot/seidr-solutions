#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same<boost::any_tag_type, typeid(double)>::value) {
        double da = boost::any_cast<double>(a);
        double db = boost::any_cast<double>(b);

        if (da > db)
            return a;
        else if (db > da)
            return b;

        return "None";
    } else if (is_same<boost::any_tag_type, typeid(std::string)>::value) {
        std::string sa = boost::any_cast<std::string>(a);
        std::string sb = boost::any_cast<std::string>(b);

        if (sa > sb)
            return a;
        else if (sb > sa)
            return b;

        return "None";
    }

    return "None";
}