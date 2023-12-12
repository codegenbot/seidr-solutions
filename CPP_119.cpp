```
string match_parens(vector<string> lst) {
    string result = "No";
    int count = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] == "'('") {
            count++;
        } else if (lst[i] == "')'") {
            count--;
        }
        if (count < 0) {
            result = "No";
            break;
        }
    }
    if (count == 0) {
        result = "Yes";
    }
    return result;
}
```