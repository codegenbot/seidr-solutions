#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        int compare = strB.compare(strA);
        if (compare > 0)
            return a;
        else if (compare < 0)
            return b;
        else
            return boost::any("None");
    }
    else {
        double da = boost::any_cast<double>(a.get());
        double db = boost::any_cast<double>(b.get());
        if (da > db)
            return a;
        else if (da < db)
            return b;
        else
            return boost::any("None");
    }
}