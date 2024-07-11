#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

std::string find_max(std::vector<std::string> words) {
    std::string result = words[0];
    int maxUniqueChars = 0;

    for (const auto& word : words) {
        std::unordered_set<char> uniqueChars(word.begin(), word.end());
        if (uniqueChars.size() > maxUniqueChars) {
            maxUniqueChars = uniqueChars.size();
            result = word;
        }
    }

    return result;
}

int main() {
    // test the function
    std::vector<std::string> words = {"apple", "banana", "cherry"};
    std::cout << find_max(words) << std::endl;
    return 0;
}