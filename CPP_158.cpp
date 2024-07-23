#include <string>
#include <vector>
#include <set>
#include <algorithm>

std::string find_max(std::vector<std::string> words) {
    std::string result;
    int maxUnique = 0;
    
    for (const std::string& word : words) {
        int uniqueChars = std::set<char>(word.begin(), word.end()).size();
        if (uniqueChars > maxUnique || (uniqueChars == maxUnique && word < result)) {
            maxUnique = uniqueChars;
            result = word;
        }
    }
    
    return result;
}