#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = any_cast<string>(a);
        string strB = any_cast<string>(b);
        double numA = stod(strA);
        double numB = stod(strB);
        if (numA > numB)
            return a;
        else if (numA < numB)
            return b;
        else
            return boost::any("None");
    } else {
        if (any_cast<int>(a) > any_cast<int>(b))
            return a;
        else if (any_cast<int>(a) < any_cast<int>(b))
            return b;
        else
            return boost::any("None");
    }
}