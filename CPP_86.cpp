#include <iostream>
#include <algorithm>

std::string anti_shuffle(std::string s) {
    std::string result = "";
    int start = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || i == s.length() - 1) {
            std::string word = s.substr(start, i - start + 1);
            std::sort(word.begin(), word.end());
            result += word + " ";
            start = i + 1;
        }
    }
    return result;
}

int main() {
    assert (anti_shuffle("Hi. My name is Mister Robot. How are you?") ==
 ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}