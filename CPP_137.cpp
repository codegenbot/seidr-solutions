#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        return to_string(boost::any_cast<float>(a)) + " is a number";
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(b);
        return a.to_string().append(to_string(x));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (str1 >= str2)
            return a;
        else
            return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x >= y)
            return a;
        else
            return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        if (x >= y)
            return a;
        else
            return b;
    } else {
        return "None";
    }
}