Here is the solution to the problem:

```cpp
int match_parens(vector<string> lst) {
    stack<char> s;
    for (string str : lst) {
        for (char c : str) {
            if (c == '(') {
                s.push(c);
            } else {
                if (s.empty() || s.top() != '(') return 0; // No match
                s.pop();
            }
        }
    }
    return s.empty(); // Check if stack is empty, if not then no match
}