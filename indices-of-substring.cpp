#include <iostream>
#include <string>
#include <vector>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int index = text.find(target);
    while (index != std::string::npos) {
        result.push_back(index);
        index = text.find(target, index + 1);
    }
    return result;
}

int main() {
    std::string text, target;
    std::cin >> text >> target;
    std::vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}