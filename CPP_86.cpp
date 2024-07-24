#include <algorithm>
#include <string>

std::string min_element(const std::string& word) {
    auto it = std::min_element(word.begin(), word.end());
    return *it;
}

std::string anti_shuffle(std::string s) {
    if (s.empty()) {
        return s;
    }
    string result = "";
    int i = 0;
    while (i <= s.length()) {
        if (s[i] == ' ') {
            result += " ";
            i++;
        } else {
            string word = "";
            while (i < s.length() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            for (char c : word) {
                result += min_element(word);
            }
            if (!result.empty()) {
                result += " ";
            }
        }
    }
    return result;
}