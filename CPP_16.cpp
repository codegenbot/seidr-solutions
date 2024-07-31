#include <algorithm>
#include <cctype>
#include <string>
#include <vector>

int count_distinct_characters(const std::string& str) {
    std::vector<char> distinctChars;
    for (char c : str) {
        if (isalpha(c) && std::find(distinctChars.begin(), distinctChars.end(), std::tolower(c)) == distinctChars.end()) {
            distinctChars.push_back(std::tolower(c));
        }
    }
    return distinctChars.size();
}