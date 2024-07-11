```cpp
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
    std::vector<std::string> words;
    // get input from user
    int n;
    std::cin >> n;
    for(int i=0; i<n; i++) {
        std::string s;
        std::cin >> s;
        words.push_back(s);
    }

    std::cout << "The maximum word is: " << find_max(words) << std::endl;

    return 0;
}