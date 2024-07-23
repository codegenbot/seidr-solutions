#include <vector>
#include <string>
#include <iostream>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    for (int i = 0; ; i++) {
        size_t pos = text.find(target, i);
        if (pos == std::string::npos) break;
        result.push_back(pos);
        i = pos + target.length();
    }
    return result;
}

int main() {
    std::string text = "Hello World Hello";
    std::string target = "Hello";
    std::vector<int> indices = indicesOfSubstring(text, target);
    for (int index : indices) {
        std::cout << index << " ";
    }
    std::cout << std::endl;
}