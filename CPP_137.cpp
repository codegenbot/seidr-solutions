#include <iostream>
#include <string>
#include <sstream>

using namespace std;

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int i = std::any_cast<int>(a);
        float f = std::any_cast<float>(b);
        return std::any((i > f) ? i : f);
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float f = std::any_cast<float>(a);
        string str = std::any_cast<string>(b);
        return std::any((stof(str) > f) ? str : (f == stof(str)) ? "None" : std::any(f));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = std::any_cast<string>(a);
        string str2 = std::any_cast<string>(b);
        return std::any((stof(str2) > stof(str1)) ? str2 : (stof(str1) == stof(str2)) ? "None" : std::any(str1));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = std::any_cast<int>(a);
        string str = std::any_cast<string>(b);
        return std::any((stof(str) > i) ? str : (i == stof(str)) ? "None" : std::any(i));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = std::any_cast<string>(a);
        int i = std::any_cast<int>(b);
        return std::any((stof(str) > i) ? str : (i == stof(str)) ? "None" : std::any(i));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = std::any_cast<float>(a);
        int i = std::any_cast<int>(b);
        return std::any((f > i) ? std::any(f) : (i == f) ? "None" : std::any(i));
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int i1 = std::any_cast<int>(a);
        int i2 = std::any_cast<int>(b);
        return std::any((i2 > i1) ? std::any(i2) : (i1 == i2) ? "None" : std::any(i1));
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
        cout << std::any_cast<string>(compare_one(std::any(i1), std::any(f2))) << endl;
    } else {
        // assume it's a string
        cin.ignore();
        getline(cin, s3);
        cout << std::any_cast<string>(compare_one(std::any(i1), std::any(s3))) << endl;
    }
    return 0;
}