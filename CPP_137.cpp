Here's the completed code:

```cpp
#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b)
            ? a : (boost::any_cast<int>(a) < boost::any_cast<int>(b) ? b : boost::any("None"));
    } else if ((a.type() == typeid(float) || a.type() == typeid(double)) &&
               (b.type() == typeid(float) || b.type() == typeid(double))) {
        return boost::any_cast<double>(a) > boost::any_cast<double>(b)
            ? a : (boost::any_cast<double>(a) < boost::any_cast<double>(b) ? b : boost::any("None"));
    } else if ((a.type() == typeid(string)) && (b.type() == typeid(string))) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);

        double da = stod(sa), db = stod(sb);

        return da > db ? a : (da < db ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        string s = boost::any_cast<string>(a);
        double d = boost::any_cast<double>(b);

        return stod(s) > d ? a : (stod(s) < d ? b : boost::any("None"));
    } else if (b.type() == typeid(string) && a.type() != typeid(string)) {
        string s = boost::any_cast<string>(b);
        double d = boost::any_cast<double>(a);

        return stod(s) > d ? b : (stod(s) < d ? a : boost::any("None"));
    } else {
        return boost::any("Invalid input");
    }
}