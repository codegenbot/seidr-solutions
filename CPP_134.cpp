bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()) return false; 
    int i = txt.size() - 1;
    while(i > 0 && txt[i] == ' ') i--; 
    string word = txt.substr(i,txt.size());
    bool isLetter = false;
    for(int j=0;j<word.size();j++){
        if(!isalpha(word[j])){
            return false; 
        }
        else{
            isLetter = true;
        }
    }   
    return !isLetter;
}