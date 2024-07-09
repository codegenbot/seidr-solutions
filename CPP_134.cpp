if (txt.empty()) {
        return false;
    }
    
    char last_char = txt.back();
    
    if (isalpha(last_char)) {
        size_t last_space = txt.find_last_of(' ');
        return (last_space == string::npos || last_space < txt.size() - 1);
    }
    
    return false;
}