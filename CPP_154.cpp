int n = a.size();
    int m = b.size();
    if (n != m) return false;
    
    string doubleA = a + a;
    return doubleA.find(b) != string::npos;
}