#include <algorithm>
#include <string>

std::string remove_vowels(std::string text) {
    text.erase(std::remove_if(text.begin(), text.end(), [](char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }), text.end());
    return text;
}

int main() {
    assert(remove_vowels("Hello") == "Hll");
    assert(remove_vowels("World") == "Wrld");
    assert(remove_vowels("This is a test") == "Ths s  tst");
    
    return 0;
}