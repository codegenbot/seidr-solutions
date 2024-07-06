#include <algorithm>
#include <string>

std::string anti_shuffle(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            string word = "";
            bool first = true;
            for (int j = i; j < s.size() && s[j] != ' '; j++) {
                if (first) {
                    first = false;
                } else {
                    word += s[j];
                }
            }
            for (char c : word) {
                result += min_element(word.begin(), word.end()) -> c;
            }
            i += word.size() - 1;
        }
    }
    return result;
}