if(txt.empty()) return false;
    char lastChar = txt.back();
    if(isalpha(lastChar)){
        if(txt.find_last_of(" ") != string::npos){
            if(txt.find_last_of(" ") > txt.find_last_of(lastChar)){
                return true;
            }
        } else {
            return true;
        }
    }
    return false;
}