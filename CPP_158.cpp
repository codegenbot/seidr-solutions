#include <iostream>
#include <vector>
#include <algorithm>

std::string find_max(std::vector<std::string> words){
    std::string maxWord = "";
    int maxUniqueChars = 0;

    for (std::string word : words) {
        int uniqueChars = 0;
        std::sort(word.begin(), word.end());
        word.erase(std::unique(word.begin(), word.end()), word.end());
        uniqueChars = word.length();

        if (uniqueChars > maxUniqueChars) {
            maxUniqueChars = uniqueChars;
            maxWord = word;
        } else if (uniqueChars == maxUniqueChars && word < maxWord) {
            maxWord = word;
        }
    }

    return maxWord;
}

int main() {
    assert((find_max({"play", "play", "play"}) == "play"));
    // Additional test cases can be added here

    return 0;
}