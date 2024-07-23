#include <string>

int vowels_count(std::string s){
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        } else if (c == 'y' && s.back() == 'y') {
            count++;
        }
    }
    return count;
}