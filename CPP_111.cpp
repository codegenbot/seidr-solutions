#include <iostream>
#include <map>
#include <string>

bool issame(std::map<char, int> a, std::map<char, int> b) {
    if (a.size() != b.size()) return false;
    for (const auto& pair : a) {
        if (b.find(pair.first) == b.end() || b[pair.first] != pair.second)
            return false;
    }
    return true;
}

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
    if (test.empty()) return result;

    for (char c : test) {
        int count = 0;
        size_t pos = 0;
        while ((pos = test.find(c, pos)) != std::string::npos) {
            count++;
            pos += 1; // skip the same character
        }
        if (count > 0) result[c] = count;
    }

    int maxCount = 0;
    for (auto& pair : result) {
        if (pair.second > maxCount)
            maxCount = pair.second;
    }

    return {std::make_pair('*', maxCount)};
}

int main() {
    std::string test;
    std::cout << "Enter a string: ";
    std::getline(std::cin, test);
    std::map<char, int> result = histogram(test);
    for (auto& pair : result) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }
    return 0;
}