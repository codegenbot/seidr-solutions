#include <iostream>
#include <string>
#include <vector>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;

    int pos = 0;
    while (pos < int(text.length())) {
        pos = text.find(target, pos);
        if (pos == std::string::npos) {
            break;
        }
        indices.push_back(pos);
        pos += 1;
    }

    return indices;
}

int main() {
    std::string text;
    std::string target;

    std::cout << "Enter the text: ";
    std::cin >> text;

    std::cout << "Enter the target string: ";
    std::cin >> target;

    std::vector<int> result = indicesOfSubstring(text, target);

    std::cout << "Indices where the target appears: ";
    for (int index : result) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}