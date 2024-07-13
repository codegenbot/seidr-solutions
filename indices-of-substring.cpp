#include <vector>
#include <iostream>
#include <string>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        int j = 0;
        while (j < target.size()) {
            if (text[i + j] != target[j]) break;
            j++;
        }
        if (j == target.size()) result.push_back(i);
    }
    return result;
}

int main() {
    std::string text, target;
    std::cout << "Enter the text: ";
    std::cin >> text;
    std::cout << "Enter the target string: ";
    std::cin >> target;
    std::vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        std::cout << i << " ";
    }
    return 0;
}