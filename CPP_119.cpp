Here is the solution:

```cpp
int balance = 0;
for(string s : lst) {
    for(char c : s) {
        if(c == '(') balance++;
        else if(c == ')') {
            if(balance <= 0) return "No";
            balance--;
        }
    }
}
return balance == 0 ? "Yes" : "No";