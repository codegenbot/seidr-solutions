#include <string>

int count_upper(string s) {
    int count = 0;
    for(int i=0; i<s.length(); i++) {
        if(isupper(s[i])) {
            count++;
        }
    }
    return count;
}