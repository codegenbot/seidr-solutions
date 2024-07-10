if (n == 0)
        return 0;
    if (n == 1)
        return 0;
    if (n == 2)
        return 2;
    if (n == 3)
        return 0;
    
    int a = 0, b = 0, c = 2, d = 0, next;
    
    for (int i = 4; i <= n; ++i) {
        next = a + b + c + d;
        a = b;
        b = c;
        c = d;
        d = next;
    }
    
    return next;
}