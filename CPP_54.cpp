bool same_chars(string s0, string s1) {
    if(s0.size() != s1.size()) return false; 
    sort(s0.begin(), s0.end());
    sort(s1.begin(), s1.end());

    for(int i = 0; i < s0.size(); i++) {
        if(s0[i] != s1[i]) return false;
    }
    return true;
}