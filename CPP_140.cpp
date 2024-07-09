Here is the solution:

```cpp
string fix_spaces(string text){
    string new_text = "";
    bool space_seen = false;

    for(char c : text){
        if(c == ' '){
            if(space_seen)
                new_text += '-';
            else
                new_text += '_';
            space_seen = true;
        }
        else {
            if(space_seen) 
                space_seen = false;
            new_text += c;
        }
    }
    return new_text;
}