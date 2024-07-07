#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (string)b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return (string)b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if ((string)a > (string)b)
            return a;
        else if ((string)a < (string)b)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if ((int)a > (int)b)
            return a;
        else if ((int)a < (int)b)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if ((float)a > (float)b)
            return a;
        else if ((float)a < (float)b)
            return b;
        else
            return boost::any("None");
    }
    else {
        return boost::any("None");
    }
}