bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false;
    string lastChar = txt.substr(txt.length() - 1);
    for(char c : lastChar) {
        if(!isalpha(c)) return false;
    }
    string words[] = {" "};
    size_t pos = 0;
    do {
        pos = txt.find(' ', pos);
        if(pos == string::npos) break;
        *words = txt.substr(0, pos);
        words++;
    } while(++pos);
    *words = txt.substr(pos);
    for(string word : *words) {
        if(word.length() > 1 || (word.length() == 1 && !isalpha(word[0]))) return false;
    }
    return true;
}