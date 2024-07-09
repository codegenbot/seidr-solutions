#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b) > boost::any_cast<int>(a)
               ? b
               : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return boost::any_cast<string>(b) > to_string(boost::any_cast<int>(a))
               ? b
               : a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return boost::any_cast<string>(b) > to_string(boost::any_cast<double>(a))
               ? b
               : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) >= boost::any_cast<int>(b)
               ? "None"
               : (boost::any_cast<int>(a) > boost::any_cast<int>(b))
                 ? a
                 : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return boost::any_cast<double>(a) >= boost::any_cast<double>(b)
               ? "None"
               : (boost::any_cast<double>(a) > boost::any_cast<double>(b))
                 ? a
                 : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any_cast<string>(a) >= boost::any_cast<string>(b)
               ? "None"
               : (boost::any_cast<string>(a) > boost::any_cast<string>(b))
                 ? a
                 : b;
    }
}