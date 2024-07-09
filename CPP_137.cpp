#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string compare_one(string a, string b) {
    float fa = stof(a);
    float fb = stof(b);
    if (fa > fb)
        return a;
    else if (fa == fb)
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