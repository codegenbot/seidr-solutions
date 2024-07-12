#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string compare_one(string a, string b) {
    stof s1 = stof(a);
    stof s2 = stof(b);

    if (s1 > s2)
        return a;
    else if (s1 == s2)
        return "None";
    else
        return b;
}

int main() {
    string a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    cout << compare_one(a, b) << endl;

    return 0;
}