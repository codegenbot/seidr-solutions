```cpp
int main() {
    return 0;
}
string fix_spaces(string text){
    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' ')
            for(int j = i+1; j < text.length() && text[j] == ' '; j++)
                i = j;
        else
            if(i > 0 && text[i-1] == ' '){
                text.replace(i, 1, "-");
                i++;
            }
    }
    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' ')
            text.replace(i, 1, "_");
    }
    return text;
}