Here is the completed code:

bool check_if_last_char_is_a_letter(string txt){
    if(txt.length() == 0)
        return false;

    string lastChar = txt.substr(txt.length()-1,1);
    for(int i=0; i<txt.length();i++){
        if(txt[i] == ' ' && txt[i+1] == lastChar[0]){
            return false;
        }
    }

    return isalpha(lastChar[0]);
}