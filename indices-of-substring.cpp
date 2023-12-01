#include <iostream>
#include <vector>
#include <string>

std::vector<int> indices_of_substring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int pos = text.find(target);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    return indices;
}

int main() {
    std::string text, target;
    std::cin >> text >> target;
    std::vector<int> result = indices_of_substring(text, target);
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    return 0;
}