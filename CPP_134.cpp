if(txt.empty())
        return false;
    
    char lastChar = txt.back();
    if(isalpha(lastChar)){
        if(txt.find_last_of(' ') != string::npos && txt.find_last_of(' ') == txt.size()-2)
            return true;
    }
    
    return false;
}