#include <string>
#include <cassert>

int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            (c == 'y' && std::find(s.begin(), s.end(), 'y') == s.end())) {
            count++;
        }
    }
    return count;
}