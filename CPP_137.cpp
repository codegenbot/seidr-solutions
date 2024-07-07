#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convertible_to<int>(), (float)b.convertible_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (string)b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)b;
        if (str.find('.') != string::npos || str.find(',') != string::npos)
            return a;
        else
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
        int x = (int)a.convertible_to<int>();
        int y = (int)b.convertible_to<int>();
        if (x > y)
            return a;
        else if (x < y)
            return b;
        else
            return boost::any("None");
    }
    else {
        return boost::any("None");
    }
}