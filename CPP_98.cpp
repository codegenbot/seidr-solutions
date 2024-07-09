#include <string>

int count_upper(std::string s) {
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'u')) {
            count++;
        }
    }
    return count;
}