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
        if (j == targetLen) {
            indices.push_back(i);
            i += targetLen;
        } else {
            i++;
        }
    }

    return indices;
}

int main() {
    std::string text;
    std::string target;

    std::cout << "Enter the text string: ";
    std::cin >> text;

    std::cout << "Enter the target string: ";
    std::cin >> target;

    std::vector<int> result = indicesOfSubstring(text, target);

    std::cout << "Indices of target in text: ";
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}