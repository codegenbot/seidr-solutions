#include <string>
#include <vector>
#include <algorithm>

int count_distinct_characters(std::string str) {
    std::vector<char> distinctCharacters;
    for (char c : str) {
        char lowerCase = tolower(c);
        if (std::find(distinctCharacters.begin(), distinctCharacters.end(), lowerCase) == distinctCharacters.end()) {
            distinctCharacters.push_back(lowerCase);
        }
    }
    return distinctCharacters.size();
}