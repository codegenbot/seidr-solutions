```cpp
#include <iostream>
#include <vector>
#include <set>
#include <string>

std::string find_max(std::vector<std::string> words) {
    std::string result = "";
    int max_unique_chars = 0;

    for (const auto& word : words) {
        set<char> unique_chars;
        for (char c : word) {
            unique_chars.insert(c);
        }
        if (unique_chars.size() > max_unique_chars) {
            max_unique_chars = unique_chars.size();
            result = word;
        } else if (unique_chars.size() == max_unique_chars && word < result) {
            result = word;
        }
    }

    return result;
}

int main() {
    std::vector<std::string> words;
    std::cout << "Enter number of words: ";
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::string word;
        std::cout << "Enter word " << i+1 << ": ";
        std::cin >> word;
        words.push_back(word);
    }

    std::cout << "The max is: " << find_max(words) << std::endl;

    return 0;
}