#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)boost::any_cast<int>(a) > (int)boost::any_cast<int>(b)
               ? a
               : (int)boost::any_cast<int>(a) < (int)boost::any_cast<int>(b)
                   ? b
                   : boost::any("None");
    } else if ((a.type() == typeid(int) && b.type() != typeid(int)) ||
               (a.type() != typeid(int) && b.type() == typeid(int))) {
        return a > b ? a : b;
    } else {
        double da = boost::any_cast<double>(a);
        double db = boost::any_cast<double>(b);
        return da > db ? a : db > da ? b : boost::any("None");
    }
}