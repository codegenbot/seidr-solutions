int n = a.length();
    int m = b.length();
    if (n != m) return false;
    
    string combined = a + a;
    return combined.find(b) != string::npos;
}