#include <iostream>
#include <string>
#include <vector>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    return indices;
}

int main() {
    std::string input;
    std::cout << "Enter the text and target separated by a space: ";
    std::getline(std::cin, input);
    
    size_t spacePos = input.find(' ');
    std::string text = input.substr(0, spacePos);
    std::string target = input.substr(spacePos + 1);

    std::vector<int> result = indicesOfSubstring(text, target);

    for (int index : result) {
        std::cout << index << " ";
    }

    return 0;
}