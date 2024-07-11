bool is_happy(const string& s) {
    if(s.length() < 3)
        return false;
    
    for(int i = 0; i < s.length() - 2; ++i) {
        if(static_cast<int>(s[i]) == static_cast<int>(s[i+1]) || static_cast<int>(s[i]) == static_cast<int>(s[i+2]) || static_cast<int>(s[i+1]) == static_cast<int>(s[i+2]))
            return false;
    }
    
    return true;
}