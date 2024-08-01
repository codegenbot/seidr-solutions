#include <iostream>
#include <cctype>

char findPunct(char* word) {
    for (int i = 0; i < strlen(word); i++) {
        if (!ispunct(word[i])) continue;
        return word[i];
    }
    return '\0';
}

int main() {
    char* word = "Hello, World!";
    std::cout << findPunct(word) << std::endl;
    return 0;
}