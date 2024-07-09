#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a.convert_to<float>() > b.convert_to<float>() ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a.convert_to<double>() > b.convert_to<int>() ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string strB = boost::any_cast<string>(b).replace(".", ",");
        return stof(strB) > a.convert_to<float>() ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string strB = boost::any_cast<string>(b).replace(".", ",");
        return stod(strB) > a.convert_to<double>() ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string strA = boost::any_cast<string>(a);
        int intB = boost::any_cast<int>(b);
        return stod(strA.replace(".", ",")) > intB ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        return stod(strB.replace(".", ",")) > stod(strA.replace(".", ",")) ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string strB = boost::any_cast<string>(b).replace(".", ",");
        return a.convert_to<float>() > stof(strB) ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string strB = boost::any_cast<string>(b).replace ".", ",";
        return a.convert_to<double>() > stod(strB) ? a : b;
    }
    else {
        return boost::any("None");
    }
}