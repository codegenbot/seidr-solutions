Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0) return false;
    string last_char = txt.substr(txt.length()-1, 1);
    for(int i=0; i<txt.length()-1; i++){
        if(txt[i] == ' ' && txt.substr(i+1).find(last_char) != string::npos){
            return true;
        }
    }
    return isalpha(last_char[0]);
}