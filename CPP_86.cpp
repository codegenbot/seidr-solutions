Here is the solution:

```cpp
string anti_shuffle(string s){
    string result = "";
    string temp;
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ' || s[i] == '\0'){
            sort(temp.begin(),temp.end());
            result += temp;
            temp = "";
        }
        else{
            temp += s[i];
        }
    }
    return result;
}