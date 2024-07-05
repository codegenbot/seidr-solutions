#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool same_chars(string s0, string s1) {
    sort(s0.begin(), s0.end());
    s0.erase(unique(s0.begin(), s0.end()), s0.end());
    sort(s1.begin(), s1.end());
    s1.erase(unique(s1.begin(), s1.end()), s1.end());
    return s0 == s1;
}

int main() {
    cout << boolalpha; // To print 'true' or 'false' instead of '1' or '0'
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    cout << same_chars(str1, str2) << endl;
    return 0;
}