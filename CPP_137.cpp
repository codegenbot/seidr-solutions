#include <boost/any.hpp>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return max((int)a.convert_to<int>(), (double)b.convert_to<double>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if ((string)a.convert_to<string>() >= (string)b.convert_to<string>())
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string str = (string)b.convert_to<string>();
        if (str[0] == '.' || str[0] == ',') {
            return max((double)a.convert_to<double>(), stod(str));
        }
        else
            return ((double)a.convert_to<double>()) > stod(str) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return compare_one(b, a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str = (string)a.convert_to<string>();
        if (str[0] == '.' || str[0] == ',') {
            return max(stod(str), (double)b.convert_to<double>());
        }
        else
            return ((double)b.convert_to<double>()) > stod(str) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any((int)max(a.convert_to<int>(), b.convert_to<int>()));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return max(a.convert_to<double>(), b.convert_to<double>());
    }
    else
        return boost::any("None");
}