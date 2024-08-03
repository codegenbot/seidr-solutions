Here is the completed code:

```cpp
#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(max((int)a.to_value<int>(), (float)b.to_value<float>()));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = (int)a.to_value<int>();
        string y = (string)b.to_value<string>();
        return boost::any(max(x, boost::lexical_cast<int>(y)));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any(max((float)a.to_value<float>(), (int)b.to_value<int>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string x = (string)a.to_value<string>();
        float y = (float)b.to_value<float>();
        return boost::any(max(boost::lexical_cast<int>(x), y));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = (string)a.to_value<string>();
        string y = (string)b.to_value<string>();
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = (int)a.to_value<int>();
        int y = (int)b.to_value<int>();
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = (float)a.to_value<float>();
        float y = (float)b.to_value<float>();
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return boost::any("None");
    }
}