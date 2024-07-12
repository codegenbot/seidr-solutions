Here is the solution:

```cpp
int count_upper(string s){
    int count = 0;
    for(int i = 0; i < s.size(); i++){
        if((s[i] >= 'A' && s[i] <= 'Z') && i % 2 == 0)
            count++;
    }
    return count;
}