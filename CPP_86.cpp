#include <cassert>
#include <algorithm>
#include <string>

std::string anti_shuffle(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            std::string word;
            int j = i;
            while (j < s.length() && s[j] != ' ') {
                word += s[j];
                j++;
            }
            sort(word.begin(), word.end());
            for (char c : word) {
                result += c;
            }
            i = j - 1;
        }
    }
    return result;