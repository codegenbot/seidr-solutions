#include <string>
#include <vector>

std::string find_max(std::vector<std::string> words){
    std::string maxWord = "";
    int maxUniqueChars = 0;

    for(const std::string& word : words){
        int uniqueChars = 0;
        std::vector<bool> charSet(26, false);

        for(char c : word){
            if(!charSet[c - 'a']){
                uniqueChars++;
                charSet[c - 'a'] = true;
            }
        }

        if(uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)){
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }

    return maxWord;
}