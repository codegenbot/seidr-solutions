Here is the completed code:

```cpp
#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b.cast<float>() > (int)a.cast<int>() ? b : "None";
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string strB = boost::any_cast<string>(b);
        return strB != "" ? b : "None";
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a.cast<float>() > (int)b.cast<int>() ? a : "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int intB = boost::any_cast<int>(b);
        string strA = boost::any_cast<string>(a);
        return strA != "" ? strA : "None";
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string strB = boost::any_cast<string>(b);
        float floatA = boost::any_cast<float>(a);
        return floatA > stof(strB) ? a : "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        return strB != "" ? (strB > strA ? b : "None") : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int intA = boost::any_cast<int>(a);
        string strB = boost::any_cast<string>(b);
        return strB != "" ? (stof(strB) > intA ? b : "None") : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        float floatB = boost::any_cast<float>(b);
        int intA = boost::any_cast<int>(a);
        return floatB > intA ? b : "None";
    }
    return "None";
}