Here is the solution:

```cpp
string solve(string s){
    string res = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            res += (islower(s[i])) ? toupper(s[i]) : tolower(s[i]);
        }else{
            res += s[i];
        }
    }
    if(res.empty()) reverse(res.begin(),res.end());
    return res;
}