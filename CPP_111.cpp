
#include <iostream>
#include <map>
#include <sstream>

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
    std::string test = "apple banana cherry apple banana";
    std::map<char, int> result = histogram(test);
    for (const auto &entry : result) {
        cout << entry.first << " appears " << entry.second << " times" << endl;
    }
    return 0;
}