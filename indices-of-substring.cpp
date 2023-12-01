#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += target.length();
    }
    return indices;
}

int main() {
    std::string text, target;
    std::cin >> text >> target;
    std::vector<int> result = indicesOfSubstring(text, target);
    if (result.empty()) {
        std::cout << 0;
    } else {
        for (int i = 0; i < result.size(); i++) {
            std::cout << result[i] << " ";
        }
    }
    return 0;
}