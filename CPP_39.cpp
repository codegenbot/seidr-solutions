int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 1; i <= n; i++) { 
        if (i == n) {
            return b;
        }
        int temp = a + b;
        a = b;
        b = temp;
        while (b % 2 == 0) {
            b /= 2;
        }
        while (b > 1 && b % 3 == 0) {
            b /= 3;
        }
        if (b <= 1) {
            return a;
        }
    }
}