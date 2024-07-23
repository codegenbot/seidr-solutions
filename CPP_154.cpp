int n = a.size();
    int m = b.size();
    if (n != m) return false;
    
    string temp = a + a;
    return temp.find(b) != string::npos;
}