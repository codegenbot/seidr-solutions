bool check_if_last_char_is_a_letter(string txt){
    if(txt.empty()){
        return false;
    }
    int size = txt.size();
    char last_char = txt[size-1];
    
    if(!isalpha(last_char)){
        return false;
    }
    
    int i = size - 2;
    while(i >= 0 && txt[i] != ' '){
        i--;
    }
    
    if(i == -1 || i == size - 2){
        return true;
    }
    
    return false;
}