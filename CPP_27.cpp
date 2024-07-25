Here is the completed code:

```cpp
string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        if(str[i]>96 && str[i]<123)
            result += toupper(str[i]);
        else 
            result += tolower(str[i]);
    }
    return result;
}