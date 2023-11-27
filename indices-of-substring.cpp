#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;

    int pos = 0;
    while (pos < int(text.length())) {
        pos = text.find(target, pos + target.length() - 1);
        if (pos == std::string::npos) {
            break;
        }
        indices.push_back(pos);
        pos += target.length();
    }

    return indices;
}

// Retrieve input values, call the indicesOfSubstring function, and print the result
int main() {
    std::string text, target;
    std::cin >> text >> target;

    std::vector<int> result = indicesOfSubstring(text, target);

    for (const int& index : result) {
        std::cout << index << " ";
    }

    return 0;
}