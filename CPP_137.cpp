#include <boost/any.hpp>
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

        int i = strA.find('.');
        if (i != -1)
            strA.erase(i, 1);

        i = strB.find(',');
        if (i != -1)
            strB[i] = '.';

        return (stod(strA) > stod(strB)) ? a : b;
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string strA = any_cast<string>(a);
        int i = strA.find('.');
        if (i != -1)
            strA.erase(i, 1);

        double numB = any_cast<double>(b);
        return (stod(strA) > numB) ? a : b;
    }
    else {
        return "None";
    }
}