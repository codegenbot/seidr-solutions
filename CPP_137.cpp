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
        if ((string)str > to_string(i))
            return b;
        else if ((string)str < to_string(i))
            return a;
        else
            return boost::any("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)b.convert_to<string>();
        float f = (float)a.convert_to<float>();
        if ((string)str > to_string(f))
            return b;
        else if ((string)str < to_string(f))
            return a;
        else
            return boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = (string)a.convert_to<string>();
        int i = (int)b.convert_to<int>();
        if ((string)str > to_string(i))
            return a;
        else if ((string)str < to_string(i))
            return boost::any(b);
        else
            return boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = (string)a.convert_to<string>();
        float f = (float)b.convert_to<float>();
        if ((string)str > to_string(f))
            return a;
        else if ((string)str < to_string(f))
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
    int num1, num2;
    string str1, str2;

    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number (or string): ";
    if (cin >> num2) {
        boost::any result = compare_one(boost::any(num1), boost::any(num2));
        if (result.type() == typeid(string))
            cout << result.convert_to<string>();
        else
            cout << result.convert_to<int>();
    } else {
        cin.ignore();
        cout << "Enter the first string: ";
        getline(cin, str1);
        
        cout << "Enter the second string: ";
        getline(cin, str2);

        boost::any result = compare_one(boost::any(str1), boost::any(str2));
        if (result.type() == typeid(string))
            cout << result.convert_to<string>();
        else
            cout << "None";
    }

    return 0;
}