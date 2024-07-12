#include <string>
#include <cctype>

int vowels_count(const std::string& s) {
    int count = 0;
    for (char c : s) {
        if (std::tolower(c) == 'a' || std::tolower(c) == 'e' ||
            std::tolower(c) == 'i' || std::tolower(c) == 'o' || 
            std::tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}