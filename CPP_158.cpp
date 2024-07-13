```cpp
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
    int n;
    std::cout << "Enter the number of words: ";
    std::cin >> n;

    std::vector<std::string> words(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter word " << i + 1 << ": ";
        std::cin >> words[i];
    }

    std::string max_word = find_max(words);

    if (!max_word.empty()) {
        std::cout << "The maximum word is: " << max_word << std::endl;
    } else {
        std::cout << "No words entered." << std::endl;
    }

    return 0;
}