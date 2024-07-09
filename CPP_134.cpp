```cpp
bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false; // Check if string is empty
    char lastChar = txt.back(); // Get the last character of the string
    bool isLetter = isalpha(lastChar); // Check if the last character is a letter
    bool isPartOfWord = false;
    for(int i = 0; i < txt.length() - 1; i++){
        if(txt[i] == ' ' && txt[i+1] == lastChar){
            isPartOfWord = true;
            break;
        }
    }
    return isLetter && !isPartOfWord;
}