Here is the completed code:

```cpp
#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any((int)boost::any_cast<float>(b) > (int)a ? boost::any(b) : ("None"));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any((float)boost::any_cast<int>(a) > (float)b ? boost::any(a) : ("None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        try {
            float x = boost::lexical_cast<float>(boost::any_cast<string>(a));
            return boost::any(x > (float)b ? a : "None");
        } catch (...) {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        try {
            float x = boost::lexical_cast<float>(boost::any_cast<string>(b));
            return boost::any(x > (float)a ? b : "None");
        } catch (...) {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (*boost::any_cast<string>(a) >= *boost::any_cast<string>(b))
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if ((int)a > (int)b)
            return a;
        else
            return "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if ((float)a > (float)b)
            return a;
        else
            return "None";
    }
    return "None";
}