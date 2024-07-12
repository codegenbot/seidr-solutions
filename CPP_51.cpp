#include <algorithm>
#include <string>
#include <cassert>

std::string remove_vowels(std::string text) {
    text.erase(std::remove_if(text.begin(), text.end(), [](char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }), text.end());
    return text;
}

int main() {
    assert(remove_vowels("Hello World") == "Hll Wrld");
    assert(remove_vowels("You are amazing") == "Y r mzng");
    assert(remove_vowels("C++ Programming") == "C++ Prgrmmng");

    return 0;
}