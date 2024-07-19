```
#include <string>

int vowels_count(std::string s) {
    int count = 0;
    for (char c : s) {
        if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u')) {
            count++;
        }
    }
    // Check if the last character is 'y'
    if (!s.empty() && s.back() == 'y') {
        count++;
    }
    return count;
}