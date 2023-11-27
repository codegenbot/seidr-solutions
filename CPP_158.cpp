#include <string>
#include <vector>

std::string find_max(std::vector<std::string> words);

#include <cassert>

std::string find_max(std::vector<std::string> words){
    std::string maxWord = "";
    int maxUniqueChars = 0;
    
    for(const std::string& word : words){
        int uniqueChars = 0;
        bool charCount[26] = {false}; // Assuming only lowercase alphabets
        
        for(char c : word){
            if(!charCount[c - 'a']){
                charCount[c - 'a'] = true;
                uniqueChars++;
            }
        }
        
        if(uniqueChars > maxUniqueChars  || (uniqueChars == maxUniqueChars && word < maxWord)){
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }
    
    return maxWord;
}

int main(){
    assert ((find_max({"play", "play", "play"}) == "play"));
    
    return 0;
}