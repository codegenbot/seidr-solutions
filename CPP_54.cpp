bool same_chars(string s0, string s1){
    sort(s0.begin(), s0.end());
    s0.erase(unique(s0.begin(), s0.end()), s0.end());
    sort(s1.begin(), s1.end());
    s1.erase(unique(s1.begin(), s1.end()), s1.end());
    return s0 == s1;
}