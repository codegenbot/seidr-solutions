#include <iostream>
#include <cctype>

int main() {
    std::string word;
    std::cin >> word;

    for (int i = 0; i < word.length(); i++) {
        if (!ispunct(word[i])) continue;
        return word[i];
    }

    for (int j = 0; j < word.length(); j++) {
        if (!ispunct(word[j])) continue;
        return word[j];
    }

    std::cout << "No punctuation found." << std::endl;

    return 0;
}