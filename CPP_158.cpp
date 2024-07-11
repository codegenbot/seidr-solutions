#include <iostream>
#include <vector>
#include <string>
#include <set>

std::string find_max(std::vector<std::string> words) {
    std::string result = "";
    int max_unique_chars = 0;

    for (const auto& word : words) {
        set<char> charSet;
        for (char c : word) {
            charSet.insert(c);
        }
        if (charSet.size() > max_unique_chars) {
            max_unique_chars = charSet.size();
            result = word;
        } else if (charSet.size() == max_unique_chars && word.length() > result.length()) {
            result = word;
        }
    }

    return result;
}

int main2() {
    std::vector<std::string> words = {"play", "play", "play"};
    std::cout << find_max(words) << std::endl;
    return 0;
}