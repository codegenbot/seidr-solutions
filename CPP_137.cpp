#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str1 = (string)a.convert_to<string>(), str2 = (string)b.convert_to<string>();
        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = (string)b.convert_to<string>();
        int i = (int)a.convert_to<int>();
        if (to_string(i) > str)
            return a;
        else if (to_string(i) < str)
            return boost::any(b);
        else
            return boost::any("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)b.convert_to<string>();
        float f = (float)a.convert_to<float>();
        if (to_string(f) > str)
            return a;
        else if (to_string(f) < str)
            return boost::any(b);
        else
            return boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = (string)a.convert_to<string>();
        int i = (int)b.convert_to<int>();
        if (str > to_string(i))
            return a;
        else if (str < to_string(i))
            return boost::any(b);
        else
            return boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = (string)a.convert_to<string>();
        float f = (float)b.convert_to<float>();
        if (str > to_string(f))
            return a;
        else if (str < to_string(f))
            return boost::any(b);
        else
            return boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = (string)a.convert_to<string>(), str2 = (string)b.convert_to<string>();
        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = (float)a.convert_to<float>(), i = (int)b.convert_to<int>();
        if (f > i)
            return a;
        else if (f < i)
            return boost::any(b);
        else
            return boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int i = (int)a.convert_to<int>(), f = (float)b.convert_to<float>();
        if (i > f)
            return a;
        else if (i < f)
            return boost::any(b);
        else
            return boost::any("None");
    }
    return a; // default to the first value
}

int main() {
    boost::any a = 10, b = "hello";
    cout << "Result: " << boost::any_cast<string>(compare_one(a, b)) << endl;
    return 0;
}