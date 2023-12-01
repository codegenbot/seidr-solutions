#include <string>
#include <vector>
#include <algorithm>

std::string find_max(std::vector<std::string> words){
    std::string maxWord = "";
    int maxUniqueChars = 0;

    for(std::string word : words){
        int uniqueChars = 0;
        std::sort(word.begin(), word.end());
        word.erase(std::unique(word.begin(), word.end()), word.end());

        if(word.length() > maxUniqueChars){
            maxUniqueChars = word.length();
            maxWord = word;
        }
        else if(word.length() == maxUniqueChars && word < maxWord){
            maxWord = word;
        }
    }

    return maxWord;
}