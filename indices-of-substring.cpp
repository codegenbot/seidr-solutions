#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    std::size_t targetLen = target.length();
    std::size_t textLen = text.length();

    std::size_t i = 0;
    while (i <= textLen - targetLen) {
        std::size_t j = 0;
        while (j < targetLen && text[i+j] == target[j]) {
            j++;
        }
        if (j >= targetLen) {
            indices.push_back(i);
            i += targetLen;
        } else {
            i++;
        }
    }

    return indices;
}

int main() {
    std::string text = "\\l\\l\\l0\\l\\l\\l\\l\\l\\";
    std::string target = "\\l";
    
    std::vector<int> result = indicesOfSubstring(text, target);

    for (int index : result) {
        std::cout << "Target found at index: " << index << std::endl;
    }

    return 0;
}