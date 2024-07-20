#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        
        if (stod(str1) > stod(str2))
            return a;
        else if (stod(str1) < stod(str2))
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string str = boost::any_cast<string>(a);
        
        if (boost::any_cast<int>(b) > stod(str))
            return b;
        else if (boost::any_cast<int>(b) < stod(str))
            return a;
        else
            return boost::any("None");
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(string)) {
        double num = boost::any_cast<double>(a);
        
        if (boost::any_cast<string>(b) > to_string(num))
            return b;
        else if (boost::any_cast<string>(b) < to_string(num))
            return a;
        else
            return boost::any("None");
    }
    
    return a;
}