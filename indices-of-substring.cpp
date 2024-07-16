#include <vector>
#include <iostream>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;

    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += 1; // Find the next occurrence
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::string str;
    std::cin >> str;

    std::vector<int> indices = indicesOfSubstring(str, str);

    for (auto i : indices) {
        std::cout << i << " ";
    }
    return 0;
}