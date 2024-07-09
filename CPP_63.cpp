int fibfib(int n){
    if(n == 0 || n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    
    int a = 0, b = 0, c = 1, fib;
    for(int i = 3; i <= n; ++i){
        fib = a + b + c;
        a = b;
        b = c;
        c = fib;
    }
    return fib;
}