#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any((int) a > (int) b ? a : b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any((float) a > (int) b ? a : b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any((int) a > (float) b ? a : b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any((float) a > (float) b ? a : b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any((string) a > (string) b ? a : b);
    }
    else {
        return "None";
    }
}