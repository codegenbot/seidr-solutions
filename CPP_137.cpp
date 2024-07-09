#include <iostream>
#include <string>
#include <sstream>

using namespace std;

any compare_one(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int i = any_cast<int>(a);
        float f = any_cast<float>(b);
        return any((i > f) ? i : f);
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float f = any_cast<float>(a);
        string str = any_cast<string>(b);
        return any((stof(str) > f) ? str : (f == stof(str)) ? "None" : any(f));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        return any((stof(str2) > stof(str1)) ? str2 : (stof(str1) == stof(str2)) ? "None" : any(str1));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = any_cast<int>(a);
        string str = any_cast<string>(b);
        return any((stof(str) > i) ? str : (i == stof(str)) ? "None" : any(i));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = any_cast<string>(a);
        int i = any_cast<int>(b);
        return any((stof(str) > i) ? str : (i == stof(str)) ? "None" : any(i));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = any_cast<float>(a);
        int i = any_cast<int>(b);
        return any((f > i) ? any(f) : (i == f) ? "None" : any(i));
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int i1 = any_cast<int>(a);
        int i2 = any_cast<int>(b);
        return any((i2 > i1) ? any(i2) : (i1 == i2) ? "None" : any(i1));
    } else {
        return "None";
    }
}

int main() {
    int i1;
    float f2;
    string s3;
    cout << "Enter the first value (integer): ";
    cin >> i1;
    cout << "Enter the second value: ";
    if (cin >> f2) {
        // assume it's a float
        cout << any_cast<string>(compare_one(any(i1), any(f2))) << endl;
    } else {
        // assume it's a string
        cin.ignore();
        getline(cin, s3);
        cout << any_cast<string>(compare_one(any(i1), any(s3))) << endl;
    }
    return 0;
}