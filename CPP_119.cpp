Here is the completed code:

```cpp
int stack = 0;
for(string s : lst) {
    for(char c : s) {
        if(c == '(') stack++;
        else if(c == ')') {
            if(stack <= 0) return "No";
            stack--;
        }
    }
}
return (stack == 0) ? "Yes" : "No";