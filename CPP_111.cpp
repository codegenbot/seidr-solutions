#include <iostream>
#include <map>
#include <sstream>
#include <algorithm>

bool issame(std::map<char, int> a, std::map<char, int> b) {
    return a == b;
}

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
    std::istringstream iss(test);
    std::string word;
    while (iss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto &entry : result) {
        maxCount = std::max(maxCount, entry.second);
    }
    std::map<char, int> maxChars;
    for (const auto &entry : result) {
        if (entry.second == maxCount) {
            maxChars[entry.first] = entry.second;
        }
    }
    return maxChars;
}

int main() {
    // Test case for histogram function
    std::string testString = "hello world";
    std::map<char, int> result = histogram(testString);

    // Output the result of the histogram function
    for (const auto &entry : result) {
        std::cout << entry.first << ": " << entry.second << std::endl;
    }

    return 0;
}