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
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);

        if (strA == "None" || strB == "None") {
            return a;
        }

        double numA = stod(strA);
        double numB = stod(strB);

        if (numA > numB) {
            return a;
        }
        else if (numA < numB) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string str = boost::any_cast<string>(a);

        if (str == "None") {
            return a;
        }

        double num = stod(str);
        if (num > boost::any_cast<double>(b)) {
            return a;
        }
        else {
            return b;
        }
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(string)) {
        double numA = boost::any_cast<double>(a);
        string strB = boost::any_cast<string>(b);

        if (strB == "None") {
            return a;
        }

        double numB = stod(strB);
        if (numA > numB) {
            return a;
        }
        else {
            return b;
        }
    }

    return a;
}