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
    std::vector<std::string> words;
    int n;
    std::cout << "Enter the number of words: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::string word;
        std::cout << "Enter word " << (i + 1) << ": ";
        std::cin.ignore(std::numeric_limits<int>::max(), '\n');
        std::getline(std::cin, word); 
        words.push_back(word);
    }

    findMaxWord(words);
    return 0;
}