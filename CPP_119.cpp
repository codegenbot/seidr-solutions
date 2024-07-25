#include <vector>
#include <stack>
#include <string>

using namespace std;

string match_parens(vector<string> lst) {
    stack<char> s;
    for (int i = 0; i < lst.size(); ++i) {
        for (char c : lst[i]) {
            if (c == '(') {
                s.push(c);
            } else if (c == ')') {
                if (s.empty()) return "No";
                s.pop();
            }
        }
    }
    return s.empty() ? "Yes" : "No";
}