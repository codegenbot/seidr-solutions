#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<std::string> reverse_delete(std::string s, std::string c);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
vector<string> reverse_delete(string s, string c) {
        string result;
        for (char ch : s) {
            if (c.find(ch) == string::npos) {
                result += ch;
            }
        }
        string reversed = result;
        reverse(reversed.begin(), reversed.end());
        return {result, result == reversed ? "True" : "False"};
    }
```