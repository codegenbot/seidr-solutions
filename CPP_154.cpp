int n = a.length();
    int m = b.length();
    if(n != m) return false;
    string s = a + a;
    return s.find(b) != string::npos;
}