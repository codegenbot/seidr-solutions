#include <iostream>
#include <vector>
#include <algorithm>

int count_distinct_characters(const std::string& str) {
    std::vector<char> distinctChars;
    for (char c : str) {
        char lowercaseC = std::tolower(c);
        if (std::find(distinctChars.begin(), distinctChars.end(), lowercaseC) == distinctChars.end()) {
            distinctChars.push_back(lowercaseC);
        }
    }
    return distinctChars.size();
}