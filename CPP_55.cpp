int fib(int n){
    if(n <= 1) return n;
    int a = 0, b = 1;
    for(int i = 2; i < n; i++){
        int t = a + b;
        a = b;
        b = t;
    }
    return b;
}