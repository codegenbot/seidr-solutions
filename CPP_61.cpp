Here is the solution:

```cpp
bool correct_bracketing(string brackets){
    int open = 0, close = 0;
    for(int i=0; i<brackets.length(); i++){
        if(brackets[i] == '(')
            open++;
        else if(brackets[i] == ')')
            close++;
    }
    return open == close;
}