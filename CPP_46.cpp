if(n == 0 || n == 1)
        return 0;
    if(n == 2)
        return 2;
    int a = 0, b = 0, c = 2, d = 0, e = 0;
    for(int i = 3; i <= n; i++){
        e = a + b + c + d;
        a = b;
        b = c;
        c = d;
        d = e;
    }
    return e;
}