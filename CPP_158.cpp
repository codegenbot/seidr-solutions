#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

std::string find_max(std::vector<std::string> words) {
    std::string result = words[0];
    int maxUniqueChars = 0;

    for (const auto& word : words) {
        std::unordered_set<char> uniqueChars(word.begin(), word.end());
        if (uniqueChars.size() > maxUniqueChars) {
            maxUniqueChars = uniqueChars.size();
            result = word;
        }
    }

    return result;
}

int main() {
    int numWords;
    std::cout << "Enter the number of words: ";
    std::cin >> numWords;

    std::vector<std::string> words(numWords);
    for (int i = 0; i < numWords; ++i) {
        std::cout << "Enter word " << (i + 1) << ": ";
        std::cin >> words[i];
    }

    std::cout << "The word with the maximum unique characters is: " << find_max(words) << std::endl;

    return 0;
}