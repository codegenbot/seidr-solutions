#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<float>(a)) {
        float fa = boost::any_cast<float>(a);
        float fb = boost::any_cast<float>(b);
        return fb > fa ? b : a;
    } else if (is_any_of<double>(a)) {
        double da = boost::any_cast<double>(a);
        double db = boost::any_cast<double>(b);
        return db > da ? b : a;
    } else if (is_any_of<int>(a)) {
        int ia = boost::any_cast<int>(a);
        int ib = boost::any_cast<int>(b);
        return ib > ia ? b : a;
    } else if (is_string(a)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        if (stod(sa) > stod(sb))
            return b;
        else if (stod(sa) < stod(sb))
            return a;
        else
            return "None";
    } else {
        return "None";
    }
}