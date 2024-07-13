#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a.convert_to<int>() > (double)b.convert_to<double>() ? b : "None";
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a.convert_to<double>() > (int)b.convert_to<int>() ? a : "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string strB = boost::any_cast<string>(b);
        return (strB.find('.') != string::npos || strB.find(',') != string::npos) ? a : (boost::any_cast<string>(a) > strB ? a : "None");
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        return (strA.find('.') != string::npos || strA.find(',') != string::npos) ? b : (boost::any_cast<string>(b) > strA ? b : "None");
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any_cast<string>(a) > boost::any_cast<string>(b) ? a : (boost::any_cast<string>(b) > boost::any_cast<string>(a) ? b : "None");
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (int)a.convert_to<int>() > boost::any_cast<string>(b).find(',') != string::npos || boost::any_cast<string>(b).find('.') != string::npos ? a : "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return boost::any_cast<string>(a).find(',') != string::npos || boost::any_cast<string>(a).find('.') != string::npos > (int)b.convert_to<int>() ? a : "None";
    }
    return "None";
}