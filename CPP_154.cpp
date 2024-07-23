int n = a.size();
    int m = b.size();
    
    if(n != m) return false;
    
    string s = a + a;
    
    return (s.find(b) != string::npos);
}