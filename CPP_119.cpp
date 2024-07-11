Here is the completed code:

```cpp
int count_open = 0;
for (const string& s : lst) {
    for (char c : s) {
        if (c == '(') count_open++;
        else if (c == ')') {
            if (count_open > 0) count_open--;
            else return "No";
        }
    }
}
return count_open == 0 ? "Yes" : "No";