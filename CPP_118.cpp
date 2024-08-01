#include <iostream>
#include <cctype>

int main() {
    std::string word;
    std::cin >> word;

    for (int i = 0; i < word.length(); i++) {
        if (ispunct(word[i])) return word[i];
    }

    return 0;
}