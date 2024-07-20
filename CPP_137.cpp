#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : (b.convert_to<boost::any>()).copy();
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a.cast<int>() > b.cast<int>() ? a : boost::any("None");
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return (double)a > (double)b ? a : boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (string)a > (string)b ? a : boost::any("None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = (int)a.cast<int>();
        string y = (string)b;
        return x > stof(y) ? a : (b.convert_to<boost::any>()).copy();
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string x = (string)a;
        int y = (int)b.cast<int>();
        return stof(x) > y ? a : (b.convert_to<boost::any>()).copy();
    }
    else {
        return boost::any("None");
    }
}