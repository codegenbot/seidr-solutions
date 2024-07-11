bool is_happy(const string& s) {
    if(s.length() < 3)
        return false;

    for(int i = 0; i < s.length() - 2; ++i){
        if(s[i] == s[i+1] || s[i] == s[i+2] || s[i+1] == s[i+2] || abs(s[i] - s[i+1]) == 1 || abs(s[i] - s[i+2]) == 1 || abs(s[i+1] - s[i+2]) == 1)
            return false;
    }

    return true;
}