Here is the completed code:

```cpp
#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        int num;
        istringstream iss(str);
        iss >> num;
        return a.convert_to<int>() > num ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any_cast<float>(a) > boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int num;
        istringstream iss(str);
        iss >> num;
        return boost::any_cast<int>(b) > num ? a : boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(a);
        float num;
        istringstream iss(str);
        iss >> num;
        return boost::any_cast<float>(b) > num ? a : boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a), str2 = boost::any_cast<string>(b);
        return str1 > str2 ? a : (str1 < str2 ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a), num2 = boost::any_cast<float>(b);
        return num1 > num2 ? a : (num1 < num2 ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a), num2 = boost::any_cast<int>(b);
        return num1 > num2 ? a : (num1 < num2 ? b : boost::any("None"));
    }
}