
#include <iostream>
#include <string>
#include <cassert>

std::string remove_vowels(const std::string& text) {
    std::string result;
    for (auto c : text) {
        if (!is_vowel(c)) {
            result += c;
        }
    }
    return result;
}

bool is_vowel(char c) {
    return std::find(vowels.begin(), vowels.end(), c) != vowels.end();
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    return 0;
}