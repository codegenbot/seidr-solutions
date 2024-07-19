#include <vector>
#include <algorithm>
#include <set>
#include <string>

std::string find_max(const std::vector<std::string>& words) {
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a > b;
            }
            return a.length() < b.length();
        });
    for (string word : words) {
        set<char> char_set(word.begin(), word.end());
        if (char_set.size() > (max_word).size()) {
            max_word = word;
        } else if (char_set.size() == (max_word).size()) {
            int a = 0, b = 0;
            for (char c : word) {
                if (c >= 'a' && c <= 'z') a++;
                else b++;
            }
            if ((double)a / (a + b) > (double)(count(max_word.begin(), max_word.end(), (char)c('a', 'z')))/(count(max_word.begin(), max_word.end(), (char)c('A', 'Z')) + count(max_word.begin(), max_word.end(), (char)c('a', 'z'))) ) {
                max_word = word;
            }
        }
    }
    return max_word;
}