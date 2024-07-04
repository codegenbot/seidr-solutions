#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

bool same_chars(const string& s0, const string& s1) {
    string s0_sorted = s0, s1_sorted = s1;
    sort(s0_sorted.begin(), s0_sorted.end());
    s0_sorted.erase(unique(s0_sorted.begin(), s0_sorted.end()), s0_sorted.end());
    sort(s1_sorted.begin(), s1_sorted.end());
    s1_sorted.erase(unique(s1_sorted.begin(), s1_sorted.end()), s1_sorted.end());
    return s0_sorted == s1_sorted;
}

int main() {
    string s0, s1;
    cin >> s0 >> s1;
    if (same_chars(s0, s1)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}