bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false;
    string words = " ";
    for(int i=0; i<txt.length(); i++) {
        if(txt[i] == ' ') {
            words += txt.substr(i,1);
        }
    }
    int last_space_index = words.find_last_of(' ');
    if(last_space_index != -1) {
        string last_word = words.substr(last_space_index+1);
        return !last_word.empty() && isalpha(txt[txt.length()-1]);
    } else {
        return isalpha(txt[txt.length()-1]);
    }
}