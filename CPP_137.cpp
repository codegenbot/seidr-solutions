Here is the completed code:

```cpp
#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b) > boost::any_cast<int>(a) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        double val = stod(boost::any_cast<string>(b));
        return val > boost::any_cast<int>(a) ? b : (boost::any_cast<int>(a) != 0 ? a : b);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a) > boost::any_cast<int>(b) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double val = boost::any_cast<double>(b);
        return stod(boost::any_cast<string>(a)) > val ? a : (val != 0 ? b : "None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return lexicographical_compare(boost::any_cast<string>(a).begin(), boost::any_cast<string>(a).end(),
                                         boost::any_cast<string>(b).begin(), boost::any_cast<string>(b).end()) > 0 ? a : (boost::any_cast<string>(a) == boost::any_cast<string>(b) ? "None" : b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return stod(boost::any_cast<string>(a)) > boost::any_cast<int>(b) ? a : (boost::any_cast<int>(b) != 0 ? "None" : a);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double val = stod(boost::any_cast<string>(b));
        return boost::any_cast<double>(a) > val ? a : (val != 0 ? b : "None");
    }
    else {
        return "None";
    }
}