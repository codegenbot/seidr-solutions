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
    string s0, s1;
    cin >> s0 >> s1;
    cout << same_chars(s0, s1) << endl;
    return 0;
}