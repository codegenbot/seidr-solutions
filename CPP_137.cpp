Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return (ai > bf ? a : b);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float af = boost::any_cast<float>(a);
        int bi = boost::any_cast<int>(b);
        return (af > bi ? a : b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        return (sa > sb ? a : b);
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int ai = boost::any_cast<int>(a);
        string bs = boost::any_cast<string>(b);
        return ((boost::any_cast<int>(bs) > ai) ? b : "None");
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string sa = boost::any_cast<string>(a);
        int bi = boost::any_cast<int>(b);
        return ((boost::any_cast<int>(sa) > bi) ? a : "None");
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float af = boost::any_cast<float>(a);
        string bs = boost::any_cast<string>(b);
        return ((boost::any_cast<float>(bs) > af) ? b : "None");
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string sa = boost::any_cast<string>(a);
        float bf = boost::any_cast<float>(b);
        return ((boost::any_cast<float>(sa) > bf) ? a : "None");
    } else {
        return "None";
    }
}