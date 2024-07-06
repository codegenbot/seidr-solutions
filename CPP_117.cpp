#include <string>
#include <vector>
#include <algorithm>

bool all_of(const std::vector<std::string>& a) {
    for (const auto& s : a) {
        if (find(s.begin(), s.end(), ' ') != s.end()) return false;
    }
    return true;
}

std::vector<std::string> select_words(std::string s, int n) {
    std::vector<std::string> result;
    std::string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            bool has_n_consonants = false;
            int consonant_count = 0;
            for (char ch : word) {
                if (!ispunct(ch) && !isspace(ch) && !isvowel(tolower(ch))) {
                    consonant_count++;
                    if (consonant_count == n) {
                        has_n_consonants = true;
                        break;
                    }
                }
            }
            if (has_n_consonants) {
                result.push_back(word);
            }
            word = "";
        }
    }
    return result;
}