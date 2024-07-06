Here's the completed code:

```cpp
#include <stdio.h>
#include <string>
using namespace std;

bool is_happy(string s) {
    if (s.length() < 3)
        return false;
    for (int i = 0; i <= s.length() - 3; i++) {
        bool unique = true;
        string temp = s.substr(i, 3);
        for (char c : temp) {
            if (count(temp.begin(), temp.end(), c) > 1) {
                unique = false;
                break;
            }
        }
        if (!unique)
            return false;
    }
    return true;
}