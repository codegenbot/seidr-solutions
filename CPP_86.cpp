#include <algorithm>

string anti_shuffle(string s) {
    string result;
    size_t start = 0;

    for (size_t i = 0; i <= s.size(); ++i) {
        if (i == s.size() || isspace(s[i])) {
            string word = s.substr(start, i - start);
            for (char& c : word) {
                result += min_element(word.begin(), word.end()) -> second;
            }
            result += ' ';
            start = i + 1;
        }
    }

    return result.substr(0, result.size() - 1); // Remove the trailing space
}