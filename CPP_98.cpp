#include <string>

int count_upper(string s) {
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        if((s[i] >= 'A' && s[i] <= 'E') || 
           (s[i] >= 'U' && s[i] <= 'Y')) {
            count++;
        }
    }
    return count;
}