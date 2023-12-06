
```cpp
#include <iostream>
#include <string>
using namespace std;

int is_bored(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'I' && (str[i + 1] == '.' || str[i + 1] == '?' || str[i + 1] == '!')) {
            count++;
        }
    }
    return count;
}
```