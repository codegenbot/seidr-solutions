if (txt.empty()) 
        return false;
    
    char last_char = txt.back();
    
    if (isalpha(last_char) && txt.find_last_of(' ') == txt.size() - 2)
        return true;
    
    return false;
}