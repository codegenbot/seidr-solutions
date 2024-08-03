#include <algorithm>
#include <iostream>
#include <string>
#include <cassert>

std::string anti_shuffle(const std::string& s) {
    std::string result = "";
    int start = 0;
    for (size_t i = 0; i < s.length(); ++i) {
        if (i == s.length() || s[i] == ' ') {
            std::string word = s.substr(start, i - start);
            std::sort(word.begin(), word.end()-1);
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