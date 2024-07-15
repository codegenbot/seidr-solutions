int fibfib(int n){
    if (n == 0 || n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    }
    
    int fib[n+1];
    fib[0] = 0;
    fib[1] = 0;
    fib[2] = 1;
    
    for (int i = 3; i <= n; i++) {
        fib[i] = fib[i-1] + fib[i-2] + fib[i-3];
    }
    
    return fib[n];
}