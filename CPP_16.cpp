#include <unordered_set>
#include <cctype>
#include <string>

int count_distinct_characters(std::string str) {
    std::unordered_set<char> distinct_chars;
    for (char c : str) {
        distinct_chars.insert(tolower(c));
    }
    return distinct_chars.size();
}