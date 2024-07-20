Here is the completed code:

```cpp
#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double d = boost::lexical_cast<double>(boost::any_cast<string>(a));
        return (d > boost::lexical_cast<double>(b)) ? a : ((double)boost::lexical_cast<double>(b) >= d) ? "None" : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double d = boost::lexical_cast<double>(b);
        return (d > boost::lexical_cast<double>(a)) ? a : ((double)boost::lexical_cast<double>(a) >= d) ? "None" : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (boost::lexical_cast<double>(a) > boost::lexical_cast<double>(b)) ? a : ((double)boost::lexical_cast<double>(b) >= boost::lexical_cast<double>(a)) ? "None" : b;
    }
}