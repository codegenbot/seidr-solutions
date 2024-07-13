Here is the completed code:

```cpp
#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(b);
        return (x > boost::lexical_cast<int>(y)) ? a : ((x < boost::lexical_cast<int>(y)) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float x = boost::any_cast<float>(a);
        string y = boost::any_cast<string>(b);
        return (x > boost::lexical_cast<float>(y)) ? a : ((x < boost::lexical_cast<float>(y)) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string x = boost::any_cast<string>(a);
        int y = boost::any_cast<int>(b);
        return (boost::lexical_cast<float>(x) > y) ? a : ((boost::lexical_cast<float>(x) < y) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string x = boost::any_cast<string>(a);
        float y = boost::any_cast<float>(b);
        return (boost::lexical_cast<float>(x) > y) ? a : ((boost::lexical_cast<float>(x) < y) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        return ((boost::lexical_cast<float>(x) > boost::lexical_cast<float>(y))) ? a : ((boost::lexical_cast<float>(x) < boost::lexical_cast<float>(y)) ? b : boost::any("None"));
    } else {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b))
            return a;
        else
            return b;
    }
}