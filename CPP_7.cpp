```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> inputStrings(n);
    for (int i = 0; i < n; i++) {
        std::cin >> inputStrings[i];
    }

    int m;
    std::cin >> m;

    std::vector<std::string> substrings(m);
    for (int i = 0; i < m; i++) {
        std::cin >> substrings[i];
    }

    for (const auto& substring : substrings) {
        std::cout << "Substrings: ";
        for (const auto& str : filter_by_substring(inputStrings, substring)) {
            std::cout << str << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}