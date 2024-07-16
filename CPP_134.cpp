if(txt.empty())
        return false;
    
    char lastChar = txt.back();
    if(isalpha(lastChar)){
        int i = txt.size()-2;
        while(i>=0 && txt[i] != ' '){
            if(isalpha(txt[i]))
                return false;
            i--;
        }
        return true;
    }
    
    return false;
}