int n = a.length();
    int m = b.length();
    if (n != m) return false;
    
    string doubled = a + a;
    
    return doubled.find(b) != string::npos;
}