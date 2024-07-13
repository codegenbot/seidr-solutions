#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

std::string find_max(std::vector<std::string> words) {
    std::string max_word = *max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            return count(a.begin(), a.end(), unique_copy(a.begin(), a.end())) <
                   count(b.begin(), b.end(), unique_copy(b.begin(), b.end()));
    });
    return max_word;
}

int main() {
    int num_words;
    std::cout << "Enter the number of words: ";
    std::cin >> num_words;

    std::vector<std::string> words(num_words);
    for (int i = 0; i < num_words; i++) {
        std::cout << "Enter word " << (i + 1) << ": ";
        std::cin >> words[i];
    }

    std::cout << "The maximum word is: " << find_max(words) << std::endl;

    return 0;
}