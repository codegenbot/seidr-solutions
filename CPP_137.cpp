Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        int num;
        size_t pos = 0;
        while ((pos = str.find_first_of(",.")) != string::npos) {
            str.replace(pos, 1, "");
        }
        if (str.length() > 0) {
            num = stoi(str);
            return a < num ? b : a;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        int num1, num2;
        size_t pos1 = 0, pos2 = 0;
        while ((pos1 = str1.find_first_of(",.")) != string::npos) {
            str1.replace(pos1, 1, "");
        }
        while ((pos2 = str2.find_first_of(",.")) != string::npos) {
            str2.replace(pos2, 1, "");
        }
        if (str1.length() > 0 && str2.length() > 0) {
            num1 = stoi(str1);
            num2 = stoi(str2);
            return boost::any(a < b ? a : b);
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}