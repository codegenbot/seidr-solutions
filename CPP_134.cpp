bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false; // Check for empty string
    char lastChar = txt.back();
    bool isWord = false;
    for(int i = 0; i < txt.size(); i++){
        if(txt[i] == ' ' || txt[i] == '\t' || txt[i] == '\n'){
            isWord = !isWord;
        }
    }
    return (isalpha(lastChar) && !isWord);
}