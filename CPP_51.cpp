#include <string>
#include <cctype>

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
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return true;
    }
    return false;
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    return 0;
}