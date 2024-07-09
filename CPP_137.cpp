#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string compare_one(string a, string b) {
    float f1 = stof(a);
    float f2 = stof(b);
    if (f1 > f2)
        return a;
    else if (f1 == f2)
        return "None";
    else
        return b;
}

int main() {
    string s1, s2;
    cout << "Enter the first value: ";
    getline(cin, s1);
    cout << "Enter the second value: ";
    getline(cin, s2);
    cout << compare_one(s1, s2) << endl;
    return 0;
}