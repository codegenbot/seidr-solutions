#include <vector>
#include <string>
#include <iostream>

std::string find_max(const std::vector<std::string>& words) {
    if (words.empty()) {
        return "";
    }
    std::string max = words[0];
    for (const auto& word : words) {
        if (word.size() > max.size()) {
            max = word;
        }
    }
    return max;
}