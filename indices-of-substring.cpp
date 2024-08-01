#include <string>
#include <vector>
#include <iostream>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int index = 0;
    while ((index = text.find(target, index)) != std::string::npos) {
        result.push_back(index);
        index += target.length(); // to avoid overlapping
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::string text;
    std::cin >> text;
    std::vector<int> indices = indicesOfSubstring(text, text.substr(0, n));
    for (int i : indices) {
        std::cout << i << std::endl;
    }
    return 0;
}