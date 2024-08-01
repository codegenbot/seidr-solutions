#include <iostream>
#include <cctype>

char findPunct(const char* word) {
    for (int i = 0; word[i]; i++) {
        if (ispunct(word[i])) return word[i];
    }
    return '\0';
}

int main() {
    const char* word = "Hello, World!";
    std::cout << "The first punctuation mark is: " << findPunct(word) << std::endl;
    return 0;
}