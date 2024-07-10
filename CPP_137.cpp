Here is the completed code:

```cpp
#include <stdio.h>
#include <string>
#include <algorithm>
#include <boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        return (stod(x) > stod(y)) ? a : ((stod(x) < stod(y)) ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        int x = boost::any_cast<int>(a);
        double y = boost::any_cast<double>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(b);
        return (x > stod(y)) ? a : ((x < stod(y)) ? b : boost::any("None"));
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        double x = boost::any_cast<double>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double x = boost::any_cast<double>(a);
        string y = boost::any_cast<string>(b);
        return (x > stod(y)) ? a : ((x < stod(y)) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string x = boost::any_cast<string>(a);
        int y = boost::any_cast<int>(b);
        return (stod(x) > y) ? a : ((stod(x) < y) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string x = boost::any_cast<string>(a);
        double y = boost::any_cast<double>(b);
        return (stod(x) > y) ? a : ((stod(x) < y) ? b : boost::any("None"));
    } else {
        throw invalid_argument("Invalid input type");
    }
}