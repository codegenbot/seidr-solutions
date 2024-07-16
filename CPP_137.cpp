#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)a.convert_to<string>();
        float f = (float)b.convert_to<float>();
        return (f > stod(str)) ? f : str;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = (string)a.convert_to<string>();
        string str2 = (string)b.convert_to<string>();
        return (stod(str2) > stod(str1)) ? str2 : ((stod(str1) == stod(str2)) ? "None" : str1);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = (int)a.convert_to<int>();
        string str = (string)b.convert_to<string>();
        return (stod(str) > i) ? str : ((i == stod(str)) ? "None" : i);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = (string)a.convert_to<string>();
        int i = (int)b.convert_to<int>();
        return (stod(str) > i) ? str : ((i == stod(str)) ? "None" : i);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = (float)a.convert_to<float>();
        int i = (int)b.convert_to<int>();
        return (f > i) ? f : ((i == f) ? "None" : i);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int i1 = (int)a.convert_to<int>();
        int i2 = (int)b.convert_to<int>();
        return (i2 > i1) ? i2 : ((i1 == i2) ? "None" : i1);
    }
    else {
        return "None";
    }
}

int main() {
    boost::any a = 10;
    boost::any b = 20.5;

    boost::variant<int, float, string> result = compare_one(a, b);

    if (boost::holds_alternative<string>(result)) {
        cout << "The result is: " << boost::get<string>(result) << endl;
    }
    else {
        cout << "The result is: " << boost::get<int>(result) << endl;
    }

    return 0;
}