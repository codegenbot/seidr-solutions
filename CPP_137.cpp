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
        string str = boost::any_cast<string>(b);
        int num = boost::lexical_cast<int>(str);
        if (num > a.cast<int>())
            return b;
        else
            return "None";
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        float num = boost::lexical_cast<float>(str);
        if (num > a.cast<float>())
            return b;
        else
            return "None";
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a), num2 = boost::any_cast<int>(b);
        if (num1 < num2)
            return a;
        else if (num1 > num2)
            return b;
        else
            return "None";
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a), num2 = boost::any_cast<float>(b);
        if (num1 < num2)
            return a;
        else if (num1 > num2)
            return b;
        else
            return "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int num = boost::lexical_cast<int>(str);
        if (num > b.cast<int>())
            return a;
        else
            return "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(a);
        float num = boost::lexical_cast<float>(str);
        if (num > b.cast<float>())
            return a;
        else
            return "None";
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a), str2 = boost::any_cast<string>(b);
        float num1 = boost::lexical_cast<float>(str1), num2 = boost::lexical_cast<float>(str2);
        if (num1 > num2)
            return a;
        else
            return b;
    }
}