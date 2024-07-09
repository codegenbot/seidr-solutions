#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
#include<boost/lexical_cast.hpp>

using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_numeric(a) && is_numeric(b)) {
        double da = boost::any_cast<double>(a);
        double db = boost::any_cast<double>(b);
        return (da > db) ? a : ((da < db) ? b : boost::any("None")));
    } else {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        return (sa > sb) ? a : ((sa < sb) ? b : boost::any("None")));
    }
}