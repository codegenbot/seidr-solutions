#include <string>
#include <vector>
#include <algorithm>

int count_distinct_characters(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    
    std::vector<char> distinctChars;
    
    for (char c : str) {
        if (std::find(distinctChars.begin(), distinctChars.end(), c) == distinctChars.end()) {
            distinctChars.push_back(c);
        }
    }
    
    return distinctChars.size();
}