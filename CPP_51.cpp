#include <iostream>
#include <string>

std::string remove_vowels(std::string str) {
    std::string result;
    for (char c : str) {
        if (!isVowel(c)) {
            result += c;
        }
    }
    return result;
}

bool isVowel(char c) {
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return true;
    }
    return false;
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    processInput();
    std::cout << "String after removing vowels: " << remove_vowels(input) << std::endl;
    return 0;

void processInput() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
}