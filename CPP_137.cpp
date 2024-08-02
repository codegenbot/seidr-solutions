#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if ((string)a.convert_to<string>() > (string)b.convert_to<string>())
            return a;
        else if ((string)a.convert_to<string>() < (string)b.convert_to<string>())
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = (string)b.convert_to<string>();
        int i = (int)a.convert_to<int>();
        if (to_string(i) > str)
            return a;
        else
            return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = (float)a.convert_to<float>(), i = (int)b.convert_to<int>();
        if (f > i)
            return a;
        else
            return boost::any(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = (string)a.convert_to<string>(), s = to_string((int)b.convert_to<int>());
        if (str > s)
            return a;
        else
            return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float f = (float)b.convert_to<float>();
        string str = (string)a.convert_to<string>();
        if (str > to_string(f))
            return a;
        else
            return boost::any(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = (string)a.convert_to<string>(), str2 = (string)b.convert_to<string>();
        if (str1 > str2)
            return a;
        else
            return b;
    }
    return a; // default to the first value
}

int main() {
    boost::any a, b;
    cout << "Enter two values for comparison: ";
    cin >> boost::any_cast<int>(&a) >> boost::any_cast<float>(&b);
    boost::any result = compare_one(a, b);
    if (boost::any_cast<string>(result) == "None")
        cout << "The values are equal.\n";
    else
        cout << "The greater value is: " << boost::any_cast<string>(result) << endl;
    return 0;
}