#include <string>
#include <algorithm>

int vowels_count(std::string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            (c == 'y' && s.length() - 1 == std::distance(s.rbegin(), std::find(s.rbegin(), s.rend(), c)))) {
            count++;
        }
    }
    return count;
}