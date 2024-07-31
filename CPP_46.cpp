int fib4(int n){
    if (n == 0 || n == 1)
        return 0;
    if (n == 2)
        return 2;
    int fib0 = 0, fib1 = 0, fib2 = 2, fib3 = 0, fib4 = 0;
    for (int i = 3; i <= n; ++i) {
        fib4 = fib0 + fib1 + fib2 + fib3;
        fib0 = fib1;
        fib1 = fib2;
        fib2 = fib3;
        fib3 = fib4;
    }
    return fib4;
}