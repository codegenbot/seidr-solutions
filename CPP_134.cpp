if(txt.empty()) return false;
    char last_char = txt.back();
    if(isalpha(last_char)){
        size_t found = txt.find_last_of(" ");
        if(found == string::npos) return true; 
        if(found == txt.size()-1) return false;
        return true;
    }
    return false;
}