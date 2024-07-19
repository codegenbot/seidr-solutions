```cpp
#include <iostream>
#include <string>

int count_upper(char *s) {
    int count = 0;
    for (int i = 0; s[i]; i++) {
        if ((i % 2 == 0 && isupper(s[i])) && (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int result = 0; 
    for (int i = 0; i < input.length(); i++) {
        if ((i % 2 == 0 && isupper(input[i])) && (input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U')) {
            result++;
        }
    }
    std::cout << "Number of uppercase vowels at even positions: " << result << std::endl;
    return 0;
}