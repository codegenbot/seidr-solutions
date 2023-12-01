#include <iostream>
#include <vector>
#include <algorithm>

int countDistinctCharacters(std::string str) {
    std::vector<char> distinctChars;
    
    for (char c : str) {
        char lowerCaseChar = std::tolower(c);
        if (std::find(distinctChars.begin(), distinctChars.end(), lowerCaseChar) == distinctChars.end()) {
            distinctChars.push_back(lowerCaseChar);
        }
    }
    
    return distinctChars.size();
}

int main() {
    assert(countDistinctCharacters("Jerry jERRY JeRRRY") == 5);
    
    return 0;
}