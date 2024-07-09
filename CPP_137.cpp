#include <boost/any.hpp>
#include <iostream>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    float value1 = boost::any_cast<float>(a);
    float value2 = boost::any_cast<float>(b);

    if (value1 > value2) {
        return a;
    } else if (value1 == value2) {
        return "None";
    }
    return b;
}