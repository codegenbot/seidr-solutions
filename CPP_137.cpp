#include <boost/any.hpp>
#include <iostream>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    float fa = boost::any_cast<float>(a);
    float fb = boost::any_cast<float>(b);

    if (fa > fb) {
        return a;
    } else if (fa == fb) {
        return "None";
    }
    return b;
}