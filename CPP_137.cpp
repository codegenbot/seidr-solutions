#include <stdio.h>
#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>
using namespace std;

boost::any convert_to_float(boost::any value) {
    if (value.type() == typeid(int)) {
        return static_cast<float>(boost::any_cast<int>(value));
    } else if (value.type() == typeid(float)) {
        return boost::any_cast<float>(value);
    } else if (value.type() == typeid(string)) {
        string str = boost::any_cast<string>(value);
        replace(str.begin(), str.end(), ',', '.');
        return boost::lexical_cast<float>(str);
    }
    return 0.0f; // Default fallback
}

boost::any compare_one(boost::any a, boost::any b) {
    float fa = boost::any_cast<float>(convert_to_float(a));
    float fb = boost::any_cast<float>(convert_to_float(b));
    
    if (fa > fb) return a;
    if (fa < fb) return b;
    return "None";
}