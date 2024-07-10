#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <cassert>

std::string find_max(std::vector<std::string> words) {
    std::string maxWord;
    int maxUniqueChars = 0;

    for (const std::string& word : words) {
        int uniqueChars = std::set<char>(word.begin(), word.end()).size();
        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)) {
            maxWord = word;
            maxUniqueChars = uniqueChars;
        }
    }

    return maxWord;
}

int main() {
    assert((find_max({"play", "play", "play"}) == "play"));
    return 0;
}