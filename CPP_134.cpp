bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false; // if string is empty, return false
    
    char lastChar = txt.back(); // get the last character of the string
    bool isLetter = isalpha(lastChar); // check if the last character is a letter
    
    int i = 0;
    while(i < txt.length() - 1 && txt[i] != ' ') {
        i++;
    }
    
    return !isLetter && (i == txt.length() - 1 || txt[i] != ' '); // if last char is not a part of word, return true
}