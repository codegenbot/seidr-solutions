#include <algorithm>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    for (int i = 0; true) {
        size_t found = text.find(target, i);
        if (found == std::string::npos) break;
        result.push_back(found);
        i = found + 1;
    }
    return result;
}

#include <iostream>

int main() {
    std::string text, target;
    std::cout << "Enter the text: ";
    std::getline(std::cin, text);
    std::cout << "Enter the target string: ";
    std::getline(std::cin, target);
    auto indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}