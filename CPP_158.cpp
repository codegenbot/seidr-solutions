#include <algorithm>
#include <cassert>
#include <string>
#include <vector>
#include <initializer_list>

std::string find_max(std::vector<std::string> words){
    std::string max_word = *max_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    return max_word;
}