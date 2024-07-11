```cpp
#include <iostream>
#include <string>

std::string remove_vowels(std::string text) {
    std::string result = text; 
    for (char c : text) {
        if (std::tolower(c) != 'a' && std::tolower(c) != 'e'
            && std::tolower(c) != 'i' && std::tolower(c) != 'o'
            && std::tolower(c) != 'u')
            result += c; 
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