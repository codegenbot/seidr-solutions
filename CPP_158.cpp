#include <iostream>
#include <vector>
#include <string>
#include <set>

std::string find_max(std::vector<std::string> words) {
    std::string maxWord = "";
    int maxUniqueChars = 0;

    for (const std::string& word : words) {
        int uniqueChars = std::set<char>(word.begin(), word.end()).size();
        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)) {
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }

    return maxWord;
}

int main() {
    std::vector<std::string> words = {"hello", "world", "cpp", "contest"};
    std::string result = find_max(words);

    std::cout << "Max unique word with the most characters: " << result << std::endl;

    return 0;
}