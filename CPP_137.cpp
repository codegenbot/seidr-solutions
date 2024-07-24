#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max(a, b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        if (stod(sa) > stod(sb))
            return a;
        else if (stod(sa) < stod(sb))
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        string sa = boost::any_cast<string>(a);
        double sb = boost::any_cast<double>(b);
        if (stod(sa) > sb)
            return a;
        else if (stod(sa) < sb)
            return b;
        else
            return boost::any("None");
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)) {
        double sa = boost::any_cast<double>(a);
        string sb = boost::any_cast<string>(b);
        if (sa > stod(sb))
            return a;
        else if (sa < stod(sb))
            return b;
        else
            return boost::any("None");
    }
    
    // If none of the above conditions are met, it means both variables are of same type.
    // In this case, we can compare them directly.
    if (a > b)
        return a;
    else if (a < b)
        return b;
    else
        return boost::any("None");
}