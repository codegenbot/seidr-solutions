int n = a.size();
    int m = b.size();
    if (n != m) return false;
    
    string combined = a + a;
    return combined.find(b) != string::npos;
}