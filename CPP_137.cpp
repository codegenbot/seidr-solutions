#include <boost/any.hpp>
#include <iostream>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (any_cast<float>(a) > any_cast<float>(b)) {
        return a;
    } else if (any_cast<float>(a) == any_cast<float>(b)) {
        return "None";
    }
    return b;
}