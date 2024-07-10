Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a > (int)b ? a : ((int)a == (int)b) ? boost::any("None") : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (float)a > (float)b ? a : ((float)a == (float)b) ? boost::any("None") : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (string)a > (string)b ? a : ((string)a == (string)b) ? boost::any("None") : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (float)b < (int)a ? a : ((int)a == (float)b) ? boost::any("None") : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (int)a < (float)b ? a : ((int)a == (float)b) ? boost::any("None") : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = to_string((float)b);
        return (string)a > str ? a : ((string)a == str) ? boost::any("None") : str;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = to_string((int)a);
        return str > (string)b ? a : ((int)a == stoi((string)b)) ? boost::any("None") : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = to_string((float)a);
        return str > (string)b ? a : ((float)a == stof((string)b)) ? boost::any("None") : b;
    }
    else {
        return "Invalid input";
    }
}