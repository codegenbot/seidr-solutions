#include <boost/any.hpp>
#include <iostream>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
        return a;
    } else if (boost::any_cast<float>(a) == boost::any_cast<float>(b)) {
        return any("None");
    }
    return b;
}