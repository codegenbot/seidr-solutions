```cpp
#include <iostream>
#include <string>

int is_bored(std::string str);

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    getline(std::cin, input);
    int result = 0; 
    for (char c : input) { 
        if (std::tolower(c) == 'i') {
            result++; 
        }
    }
    std::cout << "Count of 'I' at the beginning: " << result << std::endl;
    return 0;
}

int is_bored(std::string str) {
    int count = 0; 
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'I') {
            count++;
        }
    }
    return count;
}