Here is the completed code:

```cpp
int countOpen = 0;
for (auto str : lst) {
    for (char c : str) {
        if (c == '(') {
            countOpen++;
        } else if (c == ')') {
            if (countOpen == 0)
                return "No";
            countOpen--;
        }
    }
}
return (countOpen == 0) ? "Yes" : "No";