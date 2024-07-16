if(txt.empty()) return false;
    char last_char = txt.back();
    if(isalpha(last_char)){
        if(txt.find_last_of(' ') != string::npos){
            if(txt.find_last_of(' ') > txt.find_last_of(last_char)) return true;
            else return false;
        }
        return true;
    }
    return false;
}