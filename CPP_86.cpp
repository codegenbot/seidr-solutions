#include <algorithm>
#include <string>
#include <cassert>

namespace Contest {
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

// Call the function in another appropriate place in the code