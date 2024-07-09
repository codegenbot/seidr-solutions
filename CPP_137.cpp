```
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b.convert_to<int>() > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (double)b.convert_to<double>() > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a.convert_to<float>() > b.convert_to<int>() ? a : boost::any("None");
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a.convert_to<double>() > b.convert_to<int>() ? a : boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string strB = boost::any_cast<string>(b).replace(".", ",");
        return stod(strB) > a.convert_to<double>() ? boost::any(a) : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string strB = boost::any_cast<string>(b).replace ".", ",";
        return stod(strB) > a.convert_to<double>() ? boost::any(b) : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string strA = boost::any_cast<string>(a);
        int intB = boost::any_cast<int>(b);
        return stod(strA.replace(".", ",")) > intB ? boost::any(a) : boost::any(b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        return stod(strB.replace(".", ",")) > stod(strA.replace ".", ",")) ? boost::any(b) : boost::any(a);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string strB = boost::any_cast<string>(b).replace(".", ",");
        return a.convert_to<float>() > stod(strB) ? a : boost::any("None");
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string strB = boost::any_cast<string>(b).replace ".", ",";
        return a.convert_to<double>() > stod(strB) ? a : boost::any("None");
    }
    else {
        return boost::any("None");
    }
}