```
#include <bits/stdc++.h>

using namespace std;

string remove_vowels(string text) {
    string result = "";
    for (char c : text) {
        if (!strchr("aeiouAEIOU", c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    cout << remove_vowels("ybcd") << endl;
    return 0;
}