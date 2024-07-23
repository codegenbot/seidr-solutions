#include <string>

int count_upper(std::string s) {
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        if(i % 2 == 0 && (s[i] >= 'A' && s[i] <= 'E') || 
           (i % 2 == 0 && s[i] >= 'U' && s[i] <= 'Y')) {
            count++;
        }
    }
    return count;
}