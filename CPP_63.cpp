
int fibfib(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else if (n == 2) {
        return 1;
    }
    
    int a = 0, b = 1, c = 1, res = 0;
    
    for (int i = 3; i <= n; ++i) {
        res = a + b + c;
        a = b;
        b = c;
        c = res;
    }
    
    return res;
}