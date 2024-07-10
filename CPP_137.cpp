#include <iostream>
#include <string>
#include <boost/variant.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (holds_alternative<int>(a) && holds_alternative<double>(b)) {
        return get<int>(a) > get<double>(b) ? a : b;
    }
    else if (holds_alternation