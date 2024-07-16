vector<int> result;
    if (n == 0) return result;
    
    result.push_back(3);
    if (n == 1) return result;
    
    int a = 1, b = 1, c = 3;
    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
            c = 1 + i / 2;
        } else {
            c = a + b + c;
        }
        result.push_back(c);
        a = b;
        b = c;
    }
    
    return result;
}