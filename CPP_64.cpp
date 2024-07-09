#include <string>

int vowels_count(const std::string& s) {
    int count = 0;
    for (char c : s) {
        if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ||
            (c == 'y' && (std::string(s).find('y') + 1) == std::string(s).size())) {
            count++;
        }
    }
    return count;
}