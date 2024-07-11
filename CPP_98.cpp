Here is the completed code:

```cpp
int count_upper(string s){
    int count = 0;
    for(int i = 1; i < s.length(); i+=2) {
        if(toupper(s[i-1]) == 'A' || toupper(s[i-1]) == 'E' || toupper(s[i-1]) == 'I' || toupper(s[i-1]) == 'O' || toupper(s[i-1]) == 'U') 
            count++;
    }
    return count;
}