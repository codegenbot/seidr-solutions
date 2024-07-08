#include <string>
#include <cctype>
#include <cassert>

std::string remove_vowels(std::string text) {
    std::string result = "";
    for (char c : text) {
        if (!isvowel(c)) {
            result += c;
        }
    }
    return result;
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    return 0;
}