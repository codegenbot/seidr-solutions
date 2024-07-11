#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convertible_to<int>(), (float)b.convertible_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return max((float)a.convertible_to<float>(), (string)b.convertible_to<string>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if ((int)a.convertible_to<int>() > (string)b.convertible_to<string>())
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if ((string)a.convertible_to<string>() > (float)b.convertible_to<float>())
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = (int)a.convertible_to<int>();
        int y = (int)b.convertible_to<int>();
        if (x > y)
            return a;
        else if (x < y)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = (float)a.convertible_to<float>();
        float y = (float)b.convertible_to<float>();
        if (x > y)
            return a;
        else if (x < y)
            return b;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = (string)a.convertible_to<string>();
        string y = (string)b.convertible_to<string>();
        if (x > y)
            return a;
        else if (x < y)
            return b;
        else
            return boost::any("None");
    }
    return boost::any();
}