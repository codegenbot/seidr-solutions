#include <iostream>
#include <string>
#include <map>

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;

    // Count the occurrences of each letter in the string
    for (char c : test) {
        if (c != ' ') {
            result[c]++;
        }
    }

    // Find the maximum occurrence count
    int maxCount = 0;
    for (auto it : result) {
        if (it.second > maxCount) {
            maxCount = it.second;
        }
    }

    // Create a new map with letters that have the maximum occurrence count
    std::map<char, int> maxOccurrences;
    for (auto it : result) {
        if (it.second == maxCount) {
            maxOccurrences[it.first] = it.second;
        }
    }

    return maxOccurrences;
}