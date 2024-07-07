Here is the completed code:

```cpp
#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        if (strA > strB) {
            return a;
        } else if (strA < strB) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a);
        int intB = boost::any_cast<int>(b);
        if (intA > intB) {
            return a;
        } else if (intA < intB) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float floatA = boost::any_cast<float>(a);
        int intB = boost::any_cast<int>(b);
        if (floatA > intB) {
            return a;
        } else if (floatA < intB) {
            return b;
        } else {
            return boost::any("None");
        }
    } else {
        return boost::any("None");
    }
}