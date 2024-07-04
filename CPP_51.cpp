#include <iostream>
#include <string>
#include <cstring>
#include <cassert>

std::string remove_vowels(const std::string& text) {
    std::string result;
    for (char c : text) {
        if (!strchr("aeiouAEIOU", c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    assert(remove_vowels("abcde") == "bcd");
    std::cout << "All tests passed!" << std::endl;
    return 0;
}