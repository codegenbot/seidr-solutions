#include <iostream>
#include <string>
#include <algorithm>

string anti_shuffle(string s) {
    string result = "";
    int start = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (i == s.length() || s[i] == ' ') {
            string word = s.substr(start, i - start);
            sort(word.begin(), word.end());
            result += word + (i == s.length() ? "" : " ");
            start = i + 1;
        }
    }
    return result;
}

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}