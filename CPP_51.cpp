#include <iostream>
#include <algorithm>
#include <cassert>

std::string remove_vowels(std::string text) {
    text.erase(std::remove_if(text.begin(), text.end(), [](char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }), text.end());
    return text;
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    assert(remove_vowels("Hello, World!") == "Hll, Wrld!");
    assert(remove_vowels("Programming is fun") == "Prgrmmng s fn");
    
    std::cout << "All tests passed successfully!" << std::endl;
    return 0;
}