int n = txt.length();
    if(n == 0)
        return false;
    char lastChar = txt[n - 1];
    if(isalpha(lastChar)){
        for(int i = n - 2; i >= 0; i--){
            if(txt[i] == ' ')
                return true;
            if(isalpha(txt[i]))
                return false;
        }
    }
    return false;
}