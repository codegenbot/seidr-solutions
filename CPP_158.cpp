#include <iostream>
#include <vector>

std::string find_max(std::vector<std::string> words) {
    std::string maxWord = "";
    int maxUniqueChars = 0;

    for (std::string word : words) {
        int uniqueChars = 0;
        bool chars[26] = {false};

        for (char c : word) {
            if (!chars[c - 'a']) {
                chars[c - 'a'] = true;
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

int main() {
    // Add test cases to validate the implementation
    assert(find_max({"play", "play", "play"}) == "play");

    return 0;
}