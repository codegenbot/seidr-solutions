#include <vector>
#include <string>
#include <iostream>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target);

int main() {
    std::string text = "abcabc";
    std::string target = "bc";
    std::vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += 1; 
    }
    return result;
}