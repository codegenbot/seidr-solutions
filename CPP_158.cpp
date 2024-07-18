#include <string>
#include <set>

std::string find_max(const std::vector<std::string>& words) {
    std::string result;
    int max_unique = 0;
    for (const std::string& word : words) {
        int unique_chars = std::set<char>(word.begin(), word.end()).size();
        if (unique_chars > max_unique || (unique_chars == max_unique && word < result)) {
            max_unique = unique_chars;
            result = word;
        }
    }
    return result;
}