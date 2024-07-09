#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <boost/any_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<float>(a) || is_any_of<float>(b)) {
        float fa = boost::any_cast<float>(a);
        float fb = boost::any_cast<float>(b);
        return fa > fb ? a : b;
    } else if (is_any_of<string>(a) && is_any_of<string>(b)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        double da = stod(sa), db = stod(sb);
        if(da > db)
            return a;
        else
            return b;
    } else if (!is_any_of<float>(a) && !is_any_of<float>(b)) {
        return "None";
    }
}