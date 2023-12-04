```
#include <iostream>
#include <string>
using namespace std;
int strlen(string str) {
    int len = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            len++;
        }
    }
    return len;
}
```
This is the modified code to solve the issue of backticks not properly balanced.