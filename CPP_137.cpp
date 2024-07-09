#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_float(a) || is_float(b)) {
        float fa = get<float>(a);
        float fb = get<float>(b);
        return fa > fb ? a : b;
    } else if (is_string(a) && is_string(b)) {
        string sa = get<string>(a);
        string sb = get<string>(b);
        double da = stod(sa), db = stod(sb);
        if(da > db)
            return a;
        else
            return b;
    } else if (!is_float(a) && !is_float(b)) {
        return "None";
    }
}