#include <string>

int vowels_count(std::string s) {
    int count = 0;
    for (char c : s) {
        if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') &&
            !(s.length() - 1 == std::distance(s.begin(), std::find(s.begin(), s.end(), c)) - s.begin())) {
            count++;
        }
    }
    return count;
}