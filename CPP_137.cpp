#include <boost/any_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (boost::any_cast<int>(a) > boost::any_cast<int>(b))
        return a;
    else if (boost::any_cast<int>(b) > boost::any_cast<int>(a))
        return b;

    double aDouble = boost::any_cast<double>(a);
    double bDouble = boost::any_cast<double>(b);

    if (aDouble > bDouble)
        return a;
    else if (bDouble > aDouble)
        return b;

    string aStr = boost::any_cast<string>(a);
    string bStr = boost::any_cast<string>(b);

    return (stod(aStr) > stod(bStr)) ? a : ((stod(bStr) > stod(aStr)) ? b : "None");
}