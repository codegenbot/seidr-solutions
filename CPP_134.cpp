Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false;
    string lastChar = txt.substr(txt.length()-1);
    if(lastChar.size() > 0 && isalpha(tolower(stoi(lastChar))) && !isalpha(*txt.rbegin())){
        return true;
    }
    return false;
}