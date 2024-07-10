```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void findMaxWord(std::vector<std::string>& words) {
    std::string max_word = *std::max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    std::cout << "Max word is: " << max_word << std::endl;
}

int main() {
    int _ignore;
    std::vector<std::string> words;
    int n;
    std::cout << "Enter the number of words: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::string word;
        std::cout << "Enter word " << (i + 1) << ": ";
        std::getline(std::cin, word); 
        words.push_back(word);
        std::cout << "Press Enter to continue..."; 
        std::cin >> _ignore;  // consume the newline character and ignore the rest
        std::cin.ignore();  // clear any remaining characters in the buffer
    }

    findMaxWord(words);
    return 0;
}