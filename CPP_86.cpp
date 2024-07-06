```cpp
#include <bits/stdc++.h>
using namespace std;

string min_element(const string& s) {
    string result = "";
    for (char c : s) {
        if (c != ' ') {
            result += c;
        }
    }
    return result;
}

string anti_shuffle(string s) {
    string result = "";
    int i = 0;
    while (i < s.size()) {
        bool first = true;
        for (; i < s.size() && s[i] != ' '; i++) {
            if (!first) {
                result += min_element(to_string(s[i]))[0];
            } else {
                result += s[i];
                first = false;
            }
        }
        i++;
    }
    return result;
}

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") ==
           ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}