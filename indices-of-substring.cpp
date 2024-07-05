#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += target.size();
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::string text, target;
    std::cin >> text >> target;

    for (const auto& index : indicesOfSubstring(text, target)) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}