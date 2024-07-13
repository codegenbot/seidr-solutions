#include <vector>
#include <iostream>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int start = 0;

    while (start < text.size()) {
        size_t found = text.find(target, start);
        if (found == std::string::npos) break;
        result.push_back(found);
        start = found + 1;
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;

    // Read the string
    std::string text;
    text.resize(n);
    for (int i = 0; i < n; ++i) {
        char c;
        std::cin >> c;
        text[i] = c;
    }

    // Read the target substring
    int m;
    std::cin >> m;

    // Read the target substring
    std::string target;
    target.resize(m);
    for (int i = 0; i < m; ++i) {
        char c;
        std::cin >> c;
        target[i] = c;
    }

    // Find and print the indices of the target substring
    std::vector<int> result = indicesOfSubstring(text, target);

    // Print the result
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}