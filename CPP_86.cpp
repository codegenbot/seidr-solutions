#include <iostream>
#include <algorithm>
#include <cassert> // Include <cassert> for assert function

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
    std::sort(word.begin(), word.end());
    result += word;
    return result;
}

int main();