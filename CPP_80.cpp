bool is_happy(string s) {
    if (!all_of(s.begin(), s.end(), ::isdigit)) return false;
    string t = s;
    while(t != s) {
        int total = 0;
        for(char c : t) 
            total += (c-'0')*(c-'0');
        t = to_string(total);
    }
    return t == "1";
}