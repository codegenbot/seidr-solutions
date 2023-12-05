```
#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

int vowels_count(string s) {
    int count = 0;
    for (auto c : s) {
        if (isalpha(c)) {
            switch (tolower(c)) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    count++;
                    break;
                default:
                    break;
            }
        }
    }
    return count;
}
```