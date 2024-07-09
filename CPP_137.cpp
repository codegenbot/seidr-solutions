```cpp
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int x = boost::any_cast<int>(a);
        float y = boost::any_cast<float>(b);
        return (x > y) ? a : ((y > x) ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(b);
        if (boost::any_cast<string>(b).find_first_not_of("0123456789.") == string::npos)
            return ((stof(y) > x) ? b : ((x > stof(y)) ? a : boost::any("None")));
        else
            return boost::any("Invalid input");
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float x = boost::any_cast<float>(a);
        string y = boost::any_cast<string>(b);
        if (boost::any_cast<string>(b).find_first_not_of("0123456789.") == string::npos)
            return ((stof(y) > x) ? b : ((x > stof(y)) ? a : boost::any("None")));
        else
            return boost::any("Invalid input");
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string x = boost::any_cast<string>(a);
        int y = boost::any_cast<int>(b);
        if (boost::any_cast<string>(a).find_first_not_of("0123456789.") == string::npos)
            return ((stof(x) > y) ? a : ((y > stof(x)) ? b : boost::any("None")));
        else
            return boost::any("Invalid input");
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string x = boost::any_cast<string>(a);
        float y = boost::any_cast<float>(b);
        if (boost::any_cast<string>(a).find_first_not_of("0123456789.") == string::npos)
            return ((stof(x) > y) ? a : ((y > stof(x)) ? b : boost::any("None")));
        else
            return boost::any("Invalid input");
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        if (boost::any_cast<string>(x).find_first_not_of("0123456789.") == string::npos &&
            boost::any_cast<string>(y).find_first_not_of("0123456789.") == string::npos)
            return ((stof(x) > stof(y)) ? a : ((stof(y) > stof(x)) ? b : boost::any("None")));
        else
            return boost::any("Invalid input");
    } else {
        return boost::any("None");
    }
}