Here is the completed code:

```cpp
int countOpen = 0;
for (const string& s : lst) {
    for (char c : s) {
        if (c == '(') {
            countOpen++;
        } else if (c == ')') {
            if (countOpen > 0) {
                countOpen--;
            } else {
                return "No";
            }
        }
    }
}
return countOpen == 0 ? "Yes" : "No";