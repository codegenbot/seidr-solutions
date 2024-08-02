bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) return false; // Check for empty string
    
    int last_index = txt.size() - 1;
    char last_char = txt[last_index];
    
    bool is_letter = (last_char >= 'a' && last_char <= 'z') || (last_char >= 'A' && last_char <= 'Z');
    bool is_part_of_word = false;
    for(int i = 0; i < last_index; i++) {
        if(txt[i] == ' ') {
            is_part_of_word = true;
            break;
        }
    }
    
    return is_letter && !is_part_of_word;
}