#include <iostream>
#include <string>
#include <algorithm>

std::string anti_shuffle(std::string s) {
    std::string result = "";
    int start = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (i == s.size() || s[i] == ' ') {
            std::string word = s.substr(start, i - start);
            std::sort(word.begin(), word.end());
            result += word + " ";
            start = i + 1;
        }
    }
    return result;
}

int main() {
    using namespace std;
    assert (anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}