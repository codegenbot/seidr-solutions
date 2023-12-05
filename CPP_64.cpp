```
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        } else if (c == 'y' && s.length() > 1 && s[s.length() - 2] != ' ') {
            count++;
        }
    }
    return count;
}
```