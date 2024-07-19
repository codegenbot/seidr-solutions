Here is the solution:

```cpp
string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length();i++){
        char ch = s[i];
        if(ch >= 'a' && ch <= 'm'){
            result += (ch + 4);
        } else if(ch >= 'n' && ch <= 'z'){
            result += (ch - 20);
        }
    }
    return result;
}