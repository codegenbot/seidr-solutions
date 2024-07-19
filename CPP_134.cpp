if(txt.empty()) return false;
    int n = txt.size();
    char lastChar = txt[n-1];
    if(isalpha(lastChar)){
        if(n >= 2 && txt[n-2] == ' '){
            return true;
        }
    }
    return false;
}