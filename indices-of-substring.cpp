#include <iostream>
#include <string>
#include <vector>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    for (size_t i = 0; i < text.length(); ++i) {
        if (text[i] == target[0]) { // Check if the first character matches
            bool matchFound = true;
            for (size_t j = 1; j < target.length() && matchFound; ++j) { // Check remaining characters in the target string
                if (text[i + j] != target[j]) {
                    matchFound = false;
                }
            }
            if (matchFound) {
                result.push_back(i);
            }
        }
    }
    return result;
}