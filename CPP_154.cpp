int len1 = a.length();
    int len2 = b.length();
    if (len1 != len2) return false;
    
    string combined = a + a;
    return combined.find(b) != string::npos;
}