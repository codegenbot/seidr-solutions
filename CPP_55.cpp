int fib(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    // Add the missing function declaration
    int fib(int n);
    
    // Test the fib function
    assert(fib(12) == 144);
    
    return 0;
}