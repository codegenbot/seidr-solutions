#include <string>

int vowels_count(std::string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            (c == 'y' && std::find(s.begin(), s.end(), 'y') == s.end() - 1)) {
            count++;
        }
    }
    return count;
}