#include <iostream>
#include <algorithm>
#include <string>

std::string anti_shuffle(std::string s) {
    std::string result = "";
    std::string word = "";
    for (char c : s) {
        if (c == ' ') {
            std::sort(word.begin(), word.end());
            result += word + ' ';
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        std::sort(word.begin(), word.end());
        result += word;
    }
    return result;
}

int main() {
    std::cout << (anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy") << std::endl;
    return 0;
}