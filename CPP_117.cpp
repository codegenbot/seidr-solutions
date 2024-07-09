#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

bool is_same(char c1, char c2) {
    return tolower(c1) == tolower(c2);
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            bool has_n_consonants = count(word.begin(), word.end(), [&](unsigned char ch) { return !ispunct(ch) && !isvowel(ch); }) == n;
            if (has_n_consonants) {
                result.push_back(word);
            }
            word = "";
        }
    }
    return result;
}