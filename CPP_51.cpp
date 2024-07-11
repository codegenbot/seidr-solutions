#include <iostream>
#include <cctype>
#include <string>

int main() {
    std::string text;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, text);
    std::string result = "";
    for (char c : text) {
        if (std::tolower(c) != 'a' && std::tolower(c) != 'e'
            && std::tolower(c) != 'i' && std::tolower(c) != 'o'
            && std::tolower(c) != 'u')
            result += c; 
    }
    std::cout << "Sentence with vowels removed: " << result << std::endl;
    return 0;
}