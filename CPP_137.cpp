Here is the completed code:

```cpp
#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (static_cast<int>(b) > static_cast<int>(a)) ? b : ((static_cast<int>(a) > static_cast<int>(b)) ? a : boost::any("None"));
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return (boost::any_cast<double>(b) > boost::any_cast<double>(a)) ? b : ((boost::any_cast<double>(a) > boost::any_cast<double>(b)) ? a : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        return (stod(str_b) > stod(str_a)) ? b : ((stod(str_a) > stod(str_b)) ? a : boost::any("None"));
    } else {
        return boost::any("None");
    }
}