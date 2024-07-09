if(txt.empty())
        return false;
        
    char last_char = txt.back();
    if(isalpha(last_char)){
        size_t last_space_idx = txt.find_last_of(' ');
        if(last_space_idx == string::npos)
            return true;
        return last_space_idx == txt.length() - 1;
    }
    return false;
}