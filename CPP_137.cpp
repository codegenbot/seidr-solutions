Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        int num;
        bool isFloat = false;
        for (char c : str) {
            if (!isdigit(c) && c != '.') {
                isFloat = true;
                break;
            }
        }
        if (isFloat) {
            return b;
        } else {
            return boost::any_cast<int>(a);
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        int num;
        bool isFloat = false;
        for (char c : str) {
            if (!isdigit(c) && c != '.') {
                isFloat = true;
                break;
            }
        }
        if (isFloat) {
            return b;
        } else {
            return boost::any_cast<float>(a);
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int num = boost::any_cast<int>(b);
        string str = boost::any_cast<string>(a);
        int aNum;
        bool isFloat = false;
        for (char c : str) {
            if (!isdigit(c) && c != '.') {
                isFloat = true;
                break;
            }
        }
        if (isFloat) {
            return a;
        } else {
            return boost::any_cast<int>(b);
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float num = boost::any_cast<float>(b);
        string str = boost::any_cast<string>(a);
        int aNum;
        bool isFloat = false;
        for (char c : str) {
            if (!isdigit(c) && c != '.') {
                isFloat = true;
                break;
            }
        }
        if (isFloat) {
            return a;
        } else {
            return boost::any_cast<float>(b);
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (str1 > str2) {
            return a;
        } else if (str1 < str2) {
            return b;
        } else {
            return boost::any("None");
        }
    } else {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        } else {
            return boost::any("None");
        }
    }
}