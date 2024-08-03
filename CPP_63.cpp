if (n == 0 || n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    }
    
    int a = 0, b = 0, c = 1, fibfib_num;
    for (int i = 3; i <= n; ++i) {
        fibfib_num = a + b + c;
        a = b;
        b = c;
        c = fibfib_num;
    }
    
    return fibfib_num;
}