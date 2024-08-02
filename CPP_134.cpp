Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false;
    char last_char = txt.back();
    if(!isalpha(last_char)) return false;
    for(int i=0; i<txt.size()-1; i++){
        if(isspace(txt[i]) || !isspace(txt[i+1])) return true;
    }
    return false;
}