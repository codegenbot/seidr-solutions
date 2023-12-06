Solve the following code contest problem: CPP/80. Problem description: Complete the following code given the task description and function signature..
Currently, the code is 
```
#include <iostream>
#include <string>
using namespace std;
bool is_happy(string s) {
    if (s.length() < 3) return false;
    for (int i = 0; i < s.length() - 2; i++) {
        if (s[i] == s[i + 1] && s[i + 1] == s[i + 2]) return false;
    }
    return true;
}
int main() {
    string s = "abcd";
    cout << is_happy(s) << endl;
    return 0;
}
```
Modify the code as The error message indicates that there is an extra backtick symbol (```) in the code. The first backtick on line 2 is not closed, and the last one on line 18 is not closed either.

To fix this issue, remove all occurrences of the backtick symbol from your code, so it should look like this:
```
#include <iostream>
#include <string>
using namespace std;
bool is_happy(string s) {
    if (s.length() < 3) return false;
    for (int i = 0; i < s.length() - 2; i++) {
        if (s[i] == s[i + 1] && s[i + 1] == s[i + 2]) return false;
    }
    return true;
}
int main() {
    string s = "abcd";
    cout << is_happy(s) << endl;
    return 0;
}
```