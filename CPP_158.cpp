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
    std::cout << "Enter the number of sentences (separated by spaces): ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::string sentence;
        std::cout << "Enter sentence " << (i + 1) << ": ";
        std::cin >> sentence;
        size_t pos = 0;
        while ((pos = sentence.find(' ')) != std::string::npos) {
            words.push_back(sentence.substr(0, pos));
            sentence.erase(0, pos + 1);
        }
        if (!sentence.empty()) {
            words.push_back(sentence);
        }
    }

    findMaxWord(words);
    return 0;
}