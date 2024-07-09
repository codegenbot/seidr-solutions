```cpp
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        string y = boost::any_cast<string>(b);
        return ((stof(y) > boost::any_cast<int>(a))) ? b : ((boost::any_cast<int>(a) > stof(y)) ? a : boost::any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string y = boost::any_cast<string>(b);
        return ((stof(y) > boost::any_cast<int>(a))) ? b : ((boost::any_cast<int>(a) > stof(y)) ? a : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string y = boost::any_cast<string>(b);
        return ((stof(y) > boost::any_cast<float>(a))) ? b : ((boost::any_cast<float>(a) > stof(y)) ? a : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int y = boost::any_cast<int>(b);
        return ((stof(boost::any_cast<string>(a)) > y)) ? a : ((y > stof(boost::any_cast<string>(a))) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float y = boost::any_cast<float>(b);
        return ((stof(boost::any_cast<string>(a)) > y)) ? a : ((y > stof(boost::any_cast<string>(a))) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        return ((stof(x) > stof(y))) ? a : ((stof(y) > stof(x)) ? b : boost::any("None"));
    } else {
        return boost::any("None");
    }
}