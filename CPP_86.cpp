#include <algorithm>
#include <string>

std::string anti_shuffle(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            std::string word = "";
            while (i < s.length() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            for (int j = 0; j < word.length(); j++) {
                result += word[j];
            }
        }
    }
    return result;
}