Here is the solution:

```cpp
string match_parens(vector<string> lst) {
    int open = 0, close = 0;

    for (int i = 0; i < lst[0].size(); i++) {
        if (lst[0][i] == '(') {
            open++;
        } else {
            close++;
        }
    }

    for (int i = 0; i < lst[1].size(); i++) {
        if (lst[1][i] == '(') {
            open++;
        } else {
            close++;
        }
    }

    return (open == close) ? "Yes" : "No";
}