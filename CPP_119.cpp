Here is the completed code:

```cpp
int totalOpen = 0;
for(string s : lst) {
    for(char c : s) {
        if(c == '(')
            totalOpen++;
        else if(c == ')')
            totalOpen--;
        if(totalOpen < 0)
            return "No";
    }
}
if(totalOpen != 0)
    return "No";
return "Yes";