#include <string>
#include <vector>
#include <cassert>

std::string find_max(std::vector<std::string> words) {
    std::string maxWord = "";
    int maxUniqueChars = 0;
    
    for (const std::string& word : words) {
        int uniqueChars = 0;
        bool visited[26] = {false};
        
        for (char c : word) {
            if (!visited[c - 'a']) {
                visited[c - 'a'] = true;
                uniqueChars++;
            }
        }
        
        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)) {
            maxWord = word;
            maxUniqueChars = uniqueChars;
        }
    }
    
    return maxWord;
}