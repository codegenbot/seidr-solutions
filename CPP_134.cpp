int len = txt.length();
    if(len == 0)
        return false;
    
    char last_char = txt[len-1];
    
    if(isalpha(last_char) && (len - txt.find_last_of(' ') == 1))
        return true;
    
    return false;
}