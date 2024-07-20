bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false; // Check if string is empty
    char last_char = txt.back(); // Get the last character of the string
    if(!isalpha(last_char)) return false; // Check if the last character is an alphabetical character
    for(int i=0; i<txt.length()-1; i++) {
        if(txt[i] == ' ') break;
        else if(txt[i] != ' ' && txt[i] == last_char) return false; // Check if the last character is part of a word
    }
    return true;
}