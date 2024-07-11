bool is_happy(const string& s) {
    if(s.length() < 3)
        return false;

    for(int i = 0; i < s.length() - 2; ++i) {
        if(s[i] - 'a' == s[i + 1] - 'a' || s[i] - 'a' == s[i + 2] - 'a' || s[i + 1] - 'a' == s[i + 2] - 'a')
            return false;
    }

    return true;
}