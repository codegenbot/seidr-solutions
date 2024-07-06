#include <iostream>
#include <string>
#include <vector>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    int prev_idx = -1;
    std::vector<int> result;
    for (size_t i = 0; i < text.length(); ++i) {
        if (text.substr(i, target.length()) == target && i >= prev_idx + target.length()) {
            result.push_back(i);
            prev_idx = i;
        }
    }
    return result;
}

int main() {
    std::string text = "banana";
    std::string target = "na";
    auto indices = indicesOfSubstring(text, target);
    for (auto i : indices) {
        std::cout << i << "\n";
    }
}