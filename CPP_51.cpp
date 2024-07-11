```cpp
#include <string>
#include <iostream>
#include <cctype>

std::string remove_vowels(std::string text) {
    std::string result;
    for (int i = 0; i < text.length(); i++) {
        char c = text[i];
        if (std::tolower(c) != 'a' && std::tolower(c) != 'e'
            && std::tolower(c) != 'i' && std::tolower(c) != 'o'
            && std::tolower(c) != 'u')
            result.push_back(c); 
    }
    return result;
}

int main() {
    std::string text;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, text);
    std::string result = remove_vowels(text); 
    std::cout << "Sentence with vowels removed: " << result << std::endl;
    return 0;
}