#include <iostream>
#include <string>
#include <cassert>

std::string remove_vowels() {
    std::string text;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, text);
    std::string result = "";
    for (char c : text) {
        if (!std::string("aeiouAEIOU").find(std::tolower(c)))
            continue; 
        result += c;
    }
    return result;
}

int main() {
    assert(remove_vowels() == "ybcd");
    return 0;
}