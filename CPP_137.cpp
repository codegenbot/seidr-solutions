```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string a_str = boost::any_cast<string>(a);
        int b_int = boost::any_cast<int>(b);
        if (stoi(a_str) > b_int)
            return a;
        else if (stoi(a_str) < b_int)
            return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string b_str = boost::any_cast<string>(b);
        int a_int = boost::any_cast<int>(a);
        if (stoi(b_str) > a_int)
            return b;
        else
            return a;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string b_str = boost::any_cast<string>(b);
        float a_float = boost::any_cast<float>(a);
        if (stof(b_str) > a_float)
            return b;
        else
            return a;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string a_str = boost::any_cast<string>(a);
        int b_int = boost::any_cast<int>(b);
        if (stof(a_str) > b_int)
            return a;
        else
            return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string a_str = boost::any_cast<string>(a);
        float b_float = boost::any_cast<float>(b);
        if (stof(a_str) > b_float)
            return a;
        else
            return b;
    } else {
        float a_float = boost::any_cast<float>(a);
        float b_float = boost::any_cast<float>(b);
        if (a_float > b_float)
            return a;
        else if (a_float < b_float)
            return b;
    }
}