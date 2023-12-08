#include <iostream>
#include <string>

int strlen(char* str);

int main() {
    std::cout << "Enter a string: ";
    char input[100];
    std::cin.getline(input, 100);
    int length = strlen(input);
    std::cout << "Length of the string is: " << length << std::endl;
    return 0;
}

int strlen(char* str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}