#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a > (int)b ? a : (int)b;
    } else if ((a.type() == typeid(float) || a.type() == typeid(double)) &&
               (b.type() == typeid(float) || b.type() == typeid(double))) {
        return boost::any((boost::any_cast<float>(a) > boost::any_cast<float>(b)) ? a : b);
    } else if ((a.type() == typeid(string) && (b.type() == typeid(int) ||
                                               b.type() == typeid(float) || b.type() == typeid(double))) ||
               (b.type() == typeid(string) && (a.type() == typeid(int) ||
                                              a.type() == typeid(float) || a.type() == typeid(double)))) {
        return boost::any((boost::any_cast<string>(a) > boost::any_cast<string>(b)) ? a : b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (boost::any_cast<string>(a) > boost::any_cast<string>(b))
            return a;
        else if (boost::any_cast<string>(a) < boost::any_cast<string>(b))
            return b;
        else
            return boost::any("None");
    }
    return boost::any("None");
}