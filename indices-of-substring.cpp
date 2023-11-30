#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    std::size_t targetLen = target.length();
    std::size_t textLen = text.length();

    std::size_t i = 0;
    while (i <= textLen - targetLen + 1) {
        std::size_t j = 0;
        while (j < targetLen && text[i+j] == target[j]) {
            j++;
        }
        if (j == targetLen) {
            indices.push_back(i);
            i = i + (j > 0 ? j - 1 : 1);
        } else {
            i++;
        }
    }

    return indices;
}

int main() {
    std::string text = "This is a text example";
    std::string target = "is";
    
    std::vector<int> result = indicesOfSubstring(text, target);

    for (int index : result) {
        std::cout << "Target found at index: " << index << std::endl;
    }

    return 0;
}