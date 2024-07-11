Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        int compareResult = strcmp(str1.c_str(), str2.c_str());
        if (compareResult > 0) {
            return a;
        } else if (compareResult < 0) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num = boost::any_cast<int>(a);
        string str = boost::any_cast<string>(b);
        int compareResult = strcmp(str.c_str(), std::to_string(num).c_str());
        if (compareResult > 0) {
            return a;
        } else if (compareResult < 0) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int num = boost::any_cast<int>(b);
        string str = boost::any_cast<string>(a);
        int compareResult = strcmp(str.c_str(), std::to_string(num).c_str());
        if (compareResult > 0) {
            return a;
        } else if (compareResult < 0) {
            return b;
        } else {
            return boost::any("None");
        }
    } else {
        if (boost::any_cast<int>(a) >= boost::any_cast<int>(b)) {
            return a;
        } else {
            return b;
        }
    }
}