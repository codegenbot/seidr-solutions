#include <cctype>
#include <string>

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
    std::cout << remove_vowels("Hello, World!") << std::endl;
    return 0;
}