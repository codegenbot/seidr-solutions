bool cycpattern_check(string a, string b) {
    int n = a.length();
    int m = b.length();
    
    if (n < m) {
        return false;
    }
    
    string temp = b + b;
    
    return (temp.find(a) != string::npos);
}