#include <iostream>
#include <string>
#include <vector>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    for (size_t i = 0; i < text.length(); ++i) {
        if (text.substr(i, target.length()) == target) {
            result.push_back(i);
            result.push_back(i + target.length());
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