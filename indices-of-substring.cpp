#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;

    int pos = 0;
    while (pos < int(text.length())) {
        pos = text.find(target, pos + target.length() - 1);
        if (pos == std::string::npos) {
            break;
        }
        indices.push_back(pos);
        pos += target.length();
    }

    return indices;
}

int main() {
    std::string text, target;
    std::cout << "Enter the text: ";
    std::cin >> text;
    std::cout << "Enter the target: ";
    std::cin >> target;

    std::vector<int> result = indicesOfSubstring(text, target);

    std::cout << "Indices of target in text: ";
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}