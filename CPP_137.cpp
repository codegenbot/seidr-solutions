Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (int)a > boost::any_cast<string>(b) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        istringstream iss(s);
        float f;
        iss >> f;
        return a > f ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (string)a > to_string(boost::any_cast<int>(b)) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string s = boost::any_cast<string>(b);
        istringstream iss(s);
        float f;
        iss >> f;
        return (string)a > to_string(f) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max(a.convert_to<float>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any_cast<string>(a) > boost::any_cast<string>(b) ? a : b;
    }
    return "None";
}