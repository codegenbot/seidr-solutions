#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;

    size_t pos = 0;
    while (pos < text.length()) {
        pos = text.find(target, pos);
        if (pos == std::string::npos) {
            break;
        }
        indices.push_back(pos);
        pos += target.length();
    }

    return indices;
}

int main() {
    std::string text;
    std::string target;

    std::cout << "Enter the text: ";
    std::getline(std::cin, text);

    std::cout << "Enter the target string: ";
    std::getline(std::cin, target);

    std::vector<int> result = indicesOfSubstring(text, target);

    std::cout << "Indices at which the target appears in the text: ";
    for (int index : result) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}