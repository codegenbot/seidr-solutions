#include <string>
#include <vector>
#include <cassert>

std::string find_max(std::vector<std::string> words){
    std::string maxWord = "";
    int maxUniqueChars = 0;
    
    for(std::string word : words){
        int uniqueChars = 0;
        int charCount[26] = {0};
        
        for(char c : word){
            if(charCount[c-'a'] == 0){
                uniqueChars++;
                charCount[c-'a']++;
            }
        }
        
        if(uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)){
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }
    
    return maxWord;
}

int main() {
    assert((find_max({"play", "play", "play"}) == "play"));
    return 0;
}