#include <string>
#include <algorithm>
#include <limits>
#include <iostream>

using namespace std;

bool same_chars(string s0, string s1) {
    sort(s0.begin(), s0.end());
    sort(s1.begin(), s1.end());
    return s0 == s1;
}

int main() {
    string s0, s1;
    cout << "Enter the first string: ";
    getline(cin, s0);
    cin.ignore(numeric_limits<streamsize>::max());
    cout << "Enter the second string: ";
    getline(cin, s1);
    if (same_chars(s0, s1)) {
        cout << "The strings have the same characters.\n";
    } else {
        cout << "The strings do not have the same characters.\n";
    }
    return 0;