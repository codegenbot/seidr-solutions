#include <iostream>
#include <map>
#include <string>
#include <algorithm>

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
        if (pair.second > maxCount) maxCount = pair.second;
    }

    std::map<char, int> maxCountMap;
    for (auto& pair : result) {
        if (pair.second == maxCount)
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