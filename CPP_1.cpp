
The issue is caused by the use of backticks (`) instead of single quotes (') to enclose the string literals. To fix this, replace all instances of backticks with single quotes. For example:
```
vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    int open = 0, close = 0;
    string temp = "";

    for (int i = 0; i < paren_string.size(); i++) {
        if (paren_string[i] == '(') {
            open++;
        } else if (paren_string[i] == ')') {
            close++;
        }

        if (open == close && open > 0) {
            result.push_back(temp);
            temp = "";
            open = 0;
            close = 0;
        } else {
            temp += paren_string[i];
        }
    }

    return result;
}
```