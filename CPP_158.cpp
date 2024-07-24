#include <algorithm>
#include <string>

std::string find_max(std::vector<std::string> words){
    std::string result = *minmax_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            return (a.size() << 8) + count(a.begin(), a.end(), unique_copy(a.begin(), a.end())) <
                   (b.size() << 8) + count(b.begin(), b.end(), unique_copy(b.begin(), b.end()));
        }).first;
    return result;
}