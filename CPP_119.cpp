```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string match_parens(vector<string> lst) {
    int open = 0, close = 0;
    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return to_string(open == close) == "1" ? "Yes" : "No";
}