#include <string>
#include <set>

std::string find_max(std::vector<std::string> words) {
    std::string result;
    int max_unique_chars = 0;
    
    for (const auto& word : words) {
        int unique_chars = std::set<char>(word.begin(), word.end()).size();
        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word.compare(result) < 0)) {
            max_unique_chars = unique_chars;
            result = word;
        }
    }
    
    return result;
}