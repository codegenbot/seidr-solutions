#include <iostream>
#include <map>
#include <sstream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

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
    std::string test;
    getline(cin, test);

    std::map<char, int> result = histogram(test);

    for (const auto &entry : result) {
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}