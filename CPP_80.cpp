Solve the following code contest problem: CPP/80. Problem description: Complete the following code given the task description and function signature..
Currently, the code is 
```
bool is_happy(string s) {
    if (s.length() < 3) {
        return false;
    }

    for (int i = 0; i <= s.length() - 3; i++) {
        if (s[i] == s[i + 1] && s[i + 1] == s[i + 2]) {
            return false;
        }
    }

    return true;
}
```
Modify the code as The issue is with the use of backticks (``) in the code, which are not allowed in C++. To fix this, you can replace the backticks with regular quotes (") or remove them altogether. Additionally, the function signature for `is_happy` should be changed to `bool is_happy(const string& s)` to avoid making a copy of the input string.

Here's the corrected code:
```
#include <iostream>
#include <string>
using namespace std;

bool is_happy(const string& s) {
    if (s.length() < 3) {
        return false;
    }

    for (int i = 0; i <= s.length() - 3; i++) {
        if (s[i] == s[i + 1] && s[i + 1] == s[i + 2]) {
            return false;
        }
    }

    return true;
}

int main() {
    assert(is_happy("iopaxioi") == false);
    return 0;
}
```