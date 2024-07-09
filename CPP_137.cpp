#include <boost/any.hpp>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    // Extract values from any type
    double da = 0.0;
    string sa;
    if (a.type() == typeid(double)) {
        da = boost::any_cast<double>(a);
    } else if (a.type() == typeid(string)) {
        sa = boost::any_cast<string>(a);
    }

    double db = 0.0;
    string sb;
    if (b.type() == typeid(double)) {
        db = boost::any_cast<double>(b);
    } else if (b.type() == typeid(string)) {
        sb = boost::any_cast<string>(b);
    }

    // Compare values
    if (da > db) return a;
    if (db > da) return b;

    // Values are equal, return "None"
    return boost::any("None");
}