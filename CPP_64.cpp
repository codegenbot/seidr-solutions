#include <string>

int vowels_count(std::string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) { 
        if (std::tolower(s[i]) == 'a' || std::tolower(s[i]) == 'e' || 
            std::tolower(s[i]) == 'i' || std::tolower(s[i]) == 'o' || 
            std::tolower(s[i]) == 'u') {
            count++;
        }
    }
    return count;
}