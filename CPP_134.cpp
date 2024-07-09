Here is the completed code:

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false; 
    char lastChar = txt.back();
    string lastWord;
    for(int i=txt.length()-2;i>=0;i--) {
        if(lastWord.length() > 20 || (lastWord+txt[i]) == "     ") break;
        lastWord = txt[i]+lastWord;
    }
    return isalpha(lastChar) && (lastWord.find_last_not_of(" ") == string::npos);
}