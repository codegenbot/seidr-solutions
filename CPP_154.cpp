int n = a.size();
    int m = b.size();
    if (n != m) return false;
    
    string temp = a + a;
    
    for (int i = 0; i < n; ++i) {
        if (temp.substr(i, n) == b) return true;
    }
    
    return false;
}