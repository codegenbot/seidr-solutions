bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false; // Check for empty string
    int last_index = txt.length() - 1;
    if(!isalnum(txt[last_index])) return true; // Check if last character is not alphanumeric
    int start = 0, end = 0;
    while(end < txt.length()){
        if(txt[end] == ' '){
            if(start <= last_index) return false; // If the last character is part of a word
            start = end + 1;
        }
        else{
            end++;
        }
    }
    return true;
}