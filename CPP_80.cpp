bool is_happy(const string& s) {
    if(s.length() < 3)
        return false;
    
    for(int i = 0; i < s.length() - 2; ++i) {
        if(int(s[i]) == int(s[i+1]) || int(s[i]) == int(s[i+2]) || int(s[i+1]) == int(s[i+2]))
            return false;
    }
    
    return true;
}