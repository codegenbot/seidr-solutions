#include <assert.h>
#include <string>
#include <cctype>

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

std::string remove_vowels(std::string text){
    std::string result = "";
    for (char c : text) {
        if (!isvowel(c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
}