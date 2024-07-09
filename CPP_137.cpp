#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_float(a) || is_float(b)) {
        float fa = boost::any_cast<float>(a);
        float fb = boost::any_cast<float>(b);
        return fa > fb ? a : b;
    } else if (is_string(a) && is_string(b)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        double da = stod(sa), db = stod(sb);
        if(da > db)
            return a;
        else
            return b;
    } else if (!is_float(a) && !is_float(b)) {
        return "None";
    }
}