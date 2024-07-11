int n = a.size();
    int m = b.size();
    if (m > n) return false;
    a += a;
    return (a.find(b) != string::npos);
}