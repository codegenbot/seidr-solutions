#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = any_cast<string>(a);
        string strB = any_cast<string>(b);
        int numA = std::stod(strA);
        int numB = std::stod(strB);
        if (numA > numB)
            return a;
        else if (numA < numB)
            return b;
        else
            return boost::any("None");
    }
    else {
        double numA = any_cast<double>(a);
        double numB = any_cast<double>(b);
        if (numA > numB)
            return a;
        else if (numA < numB)
            return b;
        else
            return boost::any("None");
    }
}