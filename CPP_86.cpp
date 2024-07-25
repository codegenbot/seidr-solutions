#include <algorithm>
#include <string>

namespace Contest {
    std::string anti_shuffle(std::string s);

    std::string anti_shuffle(std::string s) {
        std::string result = "";
        std::string word = "";
        for (char c : s) {
            if (c == ' ') {
                std::sort(word.begin(), word.end(), std::greater<char>());
                result += word + ' ';
                word = "";
            } else {
                word += c;
            }
        }
        std::sort(word.begin(), word.end(), std::greater<char>());
        result += word;
        return result;
    }
}