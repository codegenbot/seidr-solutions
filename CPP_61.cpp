```cpp
int i = 0;
while(i < brackets.length()) {
    if(brackets[i] == '(') {
        i++;
        while(i < brackets.length() && brackets[i] != ')') 
            i++;
        if(i >= brackets.length())
            return false;
        i++;
    }
    else
        i++;
}
return true;