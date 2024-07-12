#include <iostream>
#include <vector>
#include <string>

std::vector<int> findSubstringIndices(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1); // Update to search from next index
    }
    return indices;
}

int main() {
    std::string text, target;
    std::cout << "Enter the text string: ";
    std::getline(std::cin, text);
    std::cout << "Enter the target string: ";
    std::getline(std::cin, target);

    std::vector<int> result = findSubstringIndices(text, target);

    std::cout << "Indices where the target appears in the text: ";
    for (int index : result) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}