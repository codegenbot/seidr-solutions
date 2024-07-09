Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convertible_to<int>(), (float)b.convertible_to<float>());
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return max((float)a.convertible_to<float>(), stof(b.convertible_to<string>()));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convertible_to<string>();
        string str2 = b.convertible_to<string>();
        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num = stoi(b.convertible_to<string>());
        if ((int)a.convertible_to<int>() > num)
            return a;
        else if ((int)a.convertible_to<int>() < num)
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int num = (int)b.convertible_to<int>();
        if (stof(a.convertible_to<string>()) > num)
            return a;
        else if (stof(a.convertible_to<string>()) < num)
            return b;
        else
            return boost::any("None");
    } else {
        if ((float)a.convertible_to<float>() > (float)b.convertible_to<float>())
            return a;
        else if ((float)a.convertible_to<float>() < (float)b.convertible_to<float>())
            return b;
        else
            return boost::any("None");
    }
}