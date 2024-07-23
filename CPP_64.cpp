#include <string>

int vowels_count(std::string s){
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            (c == 'y' && s.rbegin() == s.rend())) {
            count++;
        }
    }
    return count;
}