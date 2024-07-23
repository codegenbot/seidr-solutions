Here is the completed code:

```cpp
#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((y > x) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        return (x > y) ? a : ((y > x) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        float fx = stof(x.substr(1, x.find(',') - 1));
        float fy = stof(y.substr(1, y.find(',') - 1));
        return (fx > fy) ? a : ((fy > fx) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string x = boost::any_cast<string>(a);
        float y = boost::any_cast<float>(b);
        float fx = stof(x.substr(1, x.find(',') - 1));
        return (fx > y) ? a : ((y > fx) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float x = boost::any_cast<float>(a);
        string y = boost::any_cast<string>(b);
        float fy = stof(y.substr(1, y.find(',') - 1));
        return (x > fy) ? a : ((fy > x) ? b : boost::any("None"));
    } else {
        return boost::any("Invalid input");
    }
}