#include <string>
#include <unordered_set>

int count_distinct_characters(std::string str) {
    std::unordered_set<char> unique_chars;
    
    for (char c : str) {
        unique_chars.insert(tolower(c));
    }
    
    return unique_chars.size();
}