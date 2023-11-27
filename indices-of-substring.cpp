#include <iostream>
#include <string>
#include <vector>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;

    int pos = -1;
    while ((pos = text.find(target, pos + 1)) != std::string::npos) {
        indices.push_back(pos);
    }

    return indices;
}

int main() {
    std::string text;
    std::string target;
    std::cin >> text >> target;
    std::vector<int> result = indicesOfSubstring(text, target);
    for (int index : result) {
        std::cout << index << " ";
    }
    std::cout << std::endl;
    return 0;
}