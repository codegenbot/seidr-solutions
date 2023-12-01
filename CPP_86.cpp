#include <iostream>
#include <string>
#include <algorithm>

std::string anti_shuffle(std::string s) {
    std::string result;
    std::string word;
    
    for (char c : s) {
        if (c == ' ') {
            std::sort(word.begin(), word.end());
            result += word + ' ';
            word = "";
        } else {
            word += c;
        }
    }
    
    std::sort(word.begin(), word.end());
    result += word;
    
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    std::string orderedString = anti_shuffle(input);
    std::cout << "Ordered version of string: " << orderedString << std::endl;
    
    return 0;
}