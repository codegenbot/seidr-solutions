```
#include <iostream>
#include <string>

int count_upper(string s) {
    int count = 0;
    for (int i = 1; i < s.length(); i += 2) {
        if (toupper(s[i]) == 'A' || toupper(s[i]) == 'E' || toupper(s[i]) == 'I' || toupper(s[i]) == 'O' || toupper(s[i]) == 'U') {
            count++;
        }
    }
    return count;
}