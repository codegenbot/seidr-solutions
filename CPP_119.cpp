```cpp
#include <string>

string match_parens(vector<string> lst) {
    int open = 0;
    int close = 0;

    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }

    return to_string(open == close);
}