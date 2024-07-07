#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_none(a) || is_none(b)) return "None";
    
    if (any_cast<int>(a) > any_cast<int>(b))
        return a;
    else if (any_cast<int>(a) < any_cast<int>(b))
        return b;

    double da = any_cast<double>(a);
    double db = any_cast<double>(b);

    if (da > db)
        return a;
    else if (da < db)
        return b;

    string sa = any_cast<string>(a);
    string sb = any_cast<string>(b);

    if (stod(sa) > stod(sb))
        return a;
    else if (stod(sa) < stod(sb))
        return b;

    return "None";
}