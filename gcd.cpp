#include <iostream>
#include <vector>
#include <string>

std::vector<int> findSubstringIndices(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    return indices;
}

int main() {
    std::string text = "abcdbcdabc";
    std::string target = "bcd";
    std::vector<int> result = findSubstringIndices(text, target);
    for (int index : result) {
        std::cout << index << " ";
    }
    return 0;
}