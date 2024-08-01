#include <iostream>
#include <cctype>

int main() {
    std::string word = "Hello! World!";
    for (int i = 0; i < word.length(); i++) {
        if (!std::ispunct(word[i])) continue;
        return word[i];
    }
    return 0;
}