#include <vector>
#include <string>
#include <iostream>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int start = 0;

    while (start <= text.size() - target.size()) {
        size_t found = text.find(target, start);
        if (found != std::string::npos) {
            result.push_back(found);
            start = found + 1;
        } else {
            break;
        }
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::string text, target;
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            std::getline(std::cin, text);
        } else {
            std::cin >> target;
        }
    }

    std::cout << "[";
    for (const auto& index : indicesOfSubstring(text, target)) {
        std::cout << index;
        if (&index != &indicesOfSubstring(text, target)[0]) {
            std::cout << ", ";
        }
    }
    std::cout << "]";

    return 0;
}