#include <iostream>
#include <string>

std::string remove_vowels() {
    std::string text;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, text);
    std::string result;
    for (char c : text) {
        if (!isvowel(std::tolower(c)))
            result += c; 
    }
    return result;
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    return 0;
}