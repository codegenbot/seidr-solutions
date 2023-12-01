#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string find_max(std::vector<std::string> words){
    std::string maxWord = "";
    int maxUniqueChars = 0;

    for (std::string word : words) {
        int uniqueChars = 0;
        bool charCount[26] = {false};

        for (char c : word) {
            if (!charCount[c - 'a']) {
                charCount[c - 'a'] = true;
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

int main(){
    assert((find_max({"play", "play", "play"}) == "play"));
    // Additional test cases can be added here

    return 0;
}