#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int pos = 0;
    while (pos <= text.length() - target.length()) {
        if (text.substr(pos, target.length()) == target) {
            indices.push_back(pos);
        }
        pos++;
    }
    return indices;
}

int main() {
    std::string text, target;
    std::cin >> text >> target;
    std::vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}