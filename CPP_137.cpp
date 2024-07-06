Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string strB = boost::any_cast<string>(b).replace(",", "");
        if (stod(strB) < (float)a.convert_to<double>()) {
            return a;
        } 
        else if (stod(strB) > (float)a.convert_to<double>()) {
            return b;
        }
        else {
            return any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string strB = boost::any_cast<string>(b).replace(",", "");
        if (stod(strB) < (double)a.convert_to<double>()) {
            return a;
        } 
        else if (stod(strB) > (double)a.convert_to<double>()) {
            return b;
        }
        else {
            return any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string strA = boost::any_cast<string>(a).replace(",", "");
        string strB = boost::any_cast<string>(b);
        if (stod(strA) < (int)b.convert_to<int>()) {
            return a;
        } 
        else if (stod(strA) > (int)b.convert_to<int>()) {
            return b;
        }
        else {
            return any("None");
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string strB = boost::any_cast<string>(b).replace(",", "");
        if ((int)a < stod(strB)) {
            return b;
        } 
        else if ((int)a > stod(strB)) {
            return a;
        }
        else {
            return any("None");
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string strB = boost::any_cast<string>(b).replace(",", "");
        if ((float)a < stod(strB)) {
            return b;
        } 
        else if ((float)a > stod(strB)) {
            return a;
        }
        else {
            return any("None");
        }
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string strB = boost::any_cast<string>(b).replace(",", "");
        if ((double)a < stod(strB)) {
            return b;
        } 
        else if ((double)a > stod(strB)) {
            return a;
        }
        else {
            return any("None");
        }
    }
    else {
        return any("None");
    }
}