int n = a.size();
    int m = b.size();
    if (n != m) return false;
    string aa = a + a;
    return aa.find(b) != string::npos;
}