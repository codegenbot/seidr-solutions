bool cycpattern_check(string a, string b) {
    int len_a = a.length();
    int len_b = b.length();
    
    if (len_a < len_b) {
        return false;
    }
    
    string temp = a + a;
    
    if (temp.find(b) != string::npos) {
        return true;
    }
    
    return false;
}