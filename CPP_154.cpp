int n = a.length();
    int m = b.length();
    if (n != m)
        return false;
    a += a;
    return a.find(b) != string::npos;
}