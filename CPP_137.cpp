#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
        return a;
    } else if (boost::any_cast<int>(b) > boost::any_cast<int>(a)) {
        return b;
    } else if ((boost::any_cast<string>(a) != "") && (boost::any_cast<string>(b) != "")) {
        double numA = stod(boost::any_cast<string>(a));
        double numB = stod(boost::any_cast<string>(b));
        if (numA > numB) {
            return a;
        } else if (numB > numA) {
            return b;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}