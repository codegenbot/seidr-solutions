bool same_chars(const char* s0, const char* s1) {
    string str0(s0);
    string str1(s1);
    
    sort(str0.begin(), str0.end());
    sort(str1.begin(), str1.end());
    
    return str0 == str1;
}