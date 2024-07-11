#include <iostream>
#include <vector>
#include <string>
#include <set>

std::string find_max(std::vector<std::string> words) {
    std::string result = "";
    int max_unique_chars = 0;

    for (const auto& word : words) {
        std::set<char> unique_chars;
        for (char c : word) {
            unique_chars.insert(c);
        }
        if (unique_chars.size() > max_unique_chars) {
            max_unique_chars = unique_chars.size();
            result = word;
        } else if (unique_chars.size() == max_unique_chars && word.length() > result.length()) {
            result = word;
        }
    }

    return result;
}

std::cout << find_max({"play", "play", "play"}) << std::endl;