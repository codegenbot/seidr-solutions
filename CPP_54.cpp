```cpp
#include <iostream>
using namespace std;

bool same_chars(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    for(int i = 0; i < s1.size(); i++){
        string t; // temporary string to store the characters of `s1` at position `i`
        for(int j = i; j < s1.size() && s1[j] == s1[i]; j++)
            t += s1[j];
        if(t != s2.substr(i, t.length())){
            return false;
        }
    }
    return true;

}

int main() {
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    if (same_chars(s1, s2)) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}