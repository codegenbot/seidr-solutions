#include <iostream>
#include <string>
#include <vector>

std::vector<int> indices_of_substring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = 0;
    while (pos != text.length()) {
        pos = text.find(target, pos);
        if (pos == std::string::npos) break;
        indices.push_back(pos);
        pos += (target.length() > 0 ? target.length() : 1);
    }
    return indices;
}

int main() {
    std::string text, target;
    std::cin >> text >> target;
    std::vector<int> result = indices_of_substring(text, target);

    for (int index : result) {
        std::cout << index << " ";
    }

    return 0;
}