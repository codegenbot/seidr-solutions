#include <iostream>
#include <string>

using namespace std;

string compare_one(string s1, string s2) {
    if (stof(s1) > stof(s2)) return s1;
    else if (stof(s1) == stof(s2)) return "None";
    else return s2;
}

int main() {
    cout << compare_one("123.45", "6789") << endl; // output: 123.45
    return 0;
}