#include <algorithm>
#include <cctype>
#include <map>
#include <string>
#include <vector>

std::map<char, int> histogram(const std::string& test) {
    std::map<char, int> result;
    if (test.empty()) return result;

    std::string letters = test;
    for (char c : letters) {
        if (!std::isalpha(c)) continue; // skip non-alphabet characters
        char letter = std::tolower(c);
        result[letter] += 1;
    }

    int maxCount = 0;
    std::vector<std::pair<char, int>> mostFrequent;
    for (auto& p : result) {
        if (p.second > maxCount) {
            maxCount = p.second;
            mostFrequent.clear();
            mostFrequent.push_back(p);
        } else if (p.second == maxCount) {
            mostFrequent.push_back(p);
        }
    }

    std::map<char, int> finalResult;
    for (auto& p : mostFrequent) {
        finalResult[p.first] = p.second;
    }

    return finalResult;
}