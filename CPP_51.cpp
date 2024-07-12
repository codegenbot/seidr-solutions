#include <iostream>
#include <algorithm>
#include <string>
#include <cassert>

std::string remove_vowels(std::string text) {
    std::string result = text;
    result.erase(std::remove_if(result.begin(), result.end(), [](char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }), result.end());
    return result;
}

int main() {
    assert (remove_vowels("ybcd") == "ybcd");
    return 0;
}