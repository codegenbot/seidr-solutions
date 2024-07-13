```cpp
int i = 0, j = 0;
while(i < brackets.length()) {
    if(brackets[i] == '<') j++;
    else if(brackets[i] == '>') {
        if(j <= 0) return false;
        j--;
    }
    i++;
}
return j == 0;