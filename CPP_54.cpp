```
#include <cassert>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

bool same_chars(string s0, string s1) {
    if(s0.size() != s1.size()) {
        return false;
    }
    for(int i = 0; i < s0.size(); i++) {
        if(std::count(s0.begin(), s0.end(), s1[i]) != 1) {
            return false;
        }
    }
    return true;
}

int main() {
    string s0, s1;
    cout << "Enter the first string: ";
    cin >> s0;
    cout << "Enter the second string: ";
    cin >> s1;
    if(same_chars(s0, s1)) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}