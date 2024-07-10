Here is the completed code:

```cpp
bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false;
    string words[] = {"a", "an", "the"};
    for(int i=0; i<3; i++) {
        if(txt.find(words[i]) != string::npos && txt.back() == words[i][i]) 
            return false;
    }
    return isalpha(txt.back());
}