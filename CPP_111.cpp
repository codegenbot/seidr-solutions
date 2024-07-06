```cpp
#include <iostream>
#include <map>
#include <string>
#include <algorithm>

bool issame(std::map<char, int> a, std::map<char, int> b) {
    if (a.size() != b.size()) return false;
    for (auto& pair : a) {
        if (b.find(pair.first) == b.end() || b[pair.first] != pair.second) return false;
    }
    return true;
}

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
    if (test.empty()) return result;

    std::string letters = test;
    for (char c : std::unique(letters.begin(), letters.end())) {
        int count = 0;
        size_t pos = 0;
        while ((pos = letters.find(c, pos)) != std::string::npos) {
            count++;
            pos += 1; // skip the same character
        }
        if (count > 0) result[c] = count;
    }

    std::map<char, int> maxCountMap;
    int maxCount = 0;
    for (auto& pair : result) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxCountMap.clear();
            maxCountMap[pair.first] = pair.second;
        } else if (pair.second == maxCount)
            maxCountMap[pair.first] = pair.second;
    }

    return maxCountMap;
}

int main() {
    std::cout << "Please enter a string: ";
    std::string test;
    std::cin >> test;
    std::map<char, int> result = histogram(test);
    for (auto& pair : result) {
        std::cout << "Character " << pair.first
                  << " appeared " << pair.second << " times." << std::endl;
    }
    return 0;
}