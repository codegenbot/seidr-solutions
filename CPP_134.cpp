if(txt.empty())
        return false;
    char last_char = txt.back();
    if(isalpha(last_char)){
        if(txt.find_last_of(" ") == txt.size()-1)
            return true;
    }
    return false;
}