#include <algorithm>
#include <string>

std::string anti_shuffle(std::string s) {
    std::string result = "";
    std::string word = "";
    for (char c : s) {
        if (c == ' ') {
            std::sort(word.rbegin(), word.rend());
            result += word + ' ';
            word = "";
        } else {
            word += c;
        }
    }
    std::sort(word.rbegin(), word.rend());
    result += word;
    return result;
}