Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max((float)a.convert_to<float>(), (int)b.convert_to<int>());
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convert_to<string>();
        string str2 = b.convert_to<string>();

        int i = 0;
        while (i < str1.length() && i < str2.length()) {
            if (str1[i] != str2[i]) {
                return max(str1, str2);
            }
            i++;
        }

        return "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = a.convert_to<string>();
        float f = (float)b.convert_to<float>();

        int i = 0;
        while (i < str.length()) {
            if (str[i] == '.') {
                return max(str, boost::any(f));
            }
            i++;
        }

        return "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = a.convert_to<string>();
        int i = (int)b.convert_to<int>();

        int j = 0;
        while (j < str.length()) {
            if (str[j] == '.') {
                return max(str, boost::any(i));
            }
            j++;
        }

        return "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float f = (float)a.convert_to<float>();
        string str = b.convert_to<string>();

        int i = 0;
        while (i < str.length()) {
            if (str[i] == '.') {
                return max(boost::any(f), str);
            }
            i++;
        }

        return "None";
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = (int)a.convert_to<int>();
        string str = b.convert_to<string>();

        int j = 0;
        while (j < str.length()) {
            if (str[j] == '.') {
                return max(boost::any(i), str);
            }
            j++;
        }

        return "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = (float)a.convert_to<float>();
        int i = (int)b.convert_to<int>();

        if (f > i) {
            return a;
        }
        else if (i > f) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int i = (int)a.convert_to<int>();
        float f = (float)b.convert_to<float>();

        if (i > f) {
            return a;
        }
        else if (f > i) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }

    return "None";
}