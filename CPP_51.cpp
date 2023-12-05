#include <iostream>
#include <string>

std::string remove_vowels(std::string text) {
    std::string result;
    for (int i = 0; i < text.size(); i++) {
        if (text[i] != 'a' && text[i] != 'e' && text[i] != 'i' && text[i] != 'o' && text[i] != 'u') {
            result += text[i];
        }
    }
    return result;
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    return 0;
}