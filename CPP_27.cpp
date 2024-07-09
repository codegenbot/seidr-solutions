```
#include <string>
#include <stack>
#include <algorithm>

std::string flip_case(const std::string& str) {
    std::stack<char> s;
    for (char c : str) {
        if (c >= 'A' && c <= 'Z') {
            s.push(toupper(c));
        } else if (c >= 'a' && c <= 'z') {
            s.push(tolower(c));
        } else {
            s.push(c);
        }
    }
    std::string result;
    while (!s.empty()) {
        result += s.top();
        s.pop();
    }
    return result;
}