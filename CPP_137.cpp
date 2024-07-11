Here is the solution:

```cpp
#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return (ai > bf) ? a : ((bf > ai) ? b : boost::any("None"));
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int ai = boost::any_cast<int>(a);
        string bs = boost::any_cast<string>(b);
        return (boost::lexical_cast<float>(bs) > ai) ? b : ((ai > boost::lexical_cast<float>(bs)) ? a : boost::any("None"));
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float af = boost::any_cast<float>(a);
        int bi = boost::any_cast<int>(b);
        return (af > bi) ? a : ((bi > af) ? b : boost::any("None"));
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string as = boost::any_cast<string>(a);
        int bi = boost::any_cast<int>(b);
        return (boost::lexical_cast<float>(as) > bi) ? a : ((bi > boost::lexical_cast<float>(as)) ? b : boost::any("None"));
    }
    if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float af = boost::any_cast<float>(a);
        string bs = boost::any_cast<string>(b);
        return (af > boost::lexical_cast<float>(bs)) ? a : ((boost::lexical_cast<float>(bs) > af) ? b : boost::any("None"));
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string as = boost::any_cast<string>(a);
        string bs = boost::any_cast<string>(b);
        return (boost::lexical_cast<float>(as) > boost::lexical_cast<float>(bs)) ? a : ((boost::lexical_cast<float>(bs) > boost::lexical_cast<float>(as)) ? b : boost::any("None"));
    }
}