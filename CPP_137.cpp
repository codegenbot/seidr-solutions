Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b)
            ? a : (boost::any_cast<int>(a) < boost::any_cast<int>(b) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any_cast<float>(a) > boost::any_cast<float>(b)
            ? a : (boost::any_cast<float>(a) < boost::any_cast<float>(b) ? b : boost::any("None"));
    } else if ((a.type() == typeid(string) && b.type() == typeid(int)) ||
               (a.type() == typeid(int) && b.type() == typeid(string))) {
        return a > to_string(boost::any_cast<int>(b))
            ? a : (boost::any_cast<int>(a) < boost::any_cast<int>(b) ? b : boost::any("None"));
    } else if ((a.type() == typeid(float) && b.type() == typeid(string)) ||
               (a.type() == typeid(string) && b.type() == typeid(float))) {
        return a > to_string(boost::any_cast<float>(b))
            ? a : (boost::any_cast<float>(a) < boost::any_cast<float>(b) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a > b ? a : (a < b ? b : boost::any("None"));
    }
    return a;
}