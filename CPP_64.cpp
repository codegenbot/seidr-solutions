#include <string>

int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') &&
            !(s.length() - 1 == distance(s.begin(), find(s.begin(), s.end(), c)) - 0)) {
            count++;
        }
    }
    return count;
}