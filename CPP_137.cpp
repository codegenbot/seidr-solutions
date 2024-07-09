#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any(a);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        if (stod(strA) > stod(strB))
            return a;
        else if (stod(strA) < stod(strB))
            return b;
        else
            return boost::any("None");
    } else {
        double numA = boost::any_cast<double>(a);
        double numB = boost::any_cast<double>(b);
        if (numA > numB)
            return a;
        else if (numA < numB)
            return b;
        else
            return boost::any("None");
    }
}