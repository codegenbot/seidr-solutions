#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(numeric_floating_point())) {
        double da = get<double>(a);
        double db = get<double>(b);

        if (da > db)
            return a;
        else if (db > da)
            return b;

        return "None";
    } else if (is_any_of<a>(integer<>)) {
        int da = boost::any_cast<int>(a);
        int db = boost::any_cast<int>(b);

        if (da > db)
            return a;
        else if (db > da)
            return b;

        return "None";
    } else {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);

        double da = lexical_cast<double>(sa);
        double db = lexical_cast<double>(sb);

        if (da > db)
            return a;
        else if (db > da)
            return b;

        return "None";
    }
}