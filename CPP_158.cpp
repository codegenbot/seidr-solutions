#include <string>
#include <vector>
#include <algorithm>

std::string find_max(std::vector<std::string> words) {
    std::string res = *max_element(words.begin(), words.end(),
        [](const std::string &a, const std::string &b) {
            auto a_unique_chars = a.size();
            auto b_unique_chars = b.size();
            if(a_unique_chars == b_unique_chars)
                return a < b;
            return a_unique_chars > b_unique_chars;
        }
    );
    return res;
}