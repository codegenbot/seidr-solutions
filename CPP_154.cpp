```
#include <iostream>
#include <string>

using namespace std;

bool cycpattern_check(string a, string b) {
    int len = b.length();
    for (int i = 0; i <= a.length() - len; i++) {
        if (a.substr(i, len) == b) {
            return true;
        }
    }
    return false;
}
```