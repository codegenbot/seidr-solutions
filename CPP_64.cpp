Here is the solution:

```cpp
int vowels_count(string s){
    int count = 0;
    for(int i=0; i<s.size(); i++){
        char ch = tolower(s[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || (ch == 'y' && i==s.size()-1)){
            count++;
        }
    }
    return count;
}