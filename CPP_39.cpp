int prime_fib(int n) {
    if (n == 1) return 2;
    if (n == 2) return 3;
    
    int prev = 3, curr = 5;
    int count = 3;
    
    while (count < n) {
        int next = prev + curr;
        prev = curr;
        curr = next;
        
        bool isPrime = true;
        for (int i = 2; i * i <= curr; i++) {
            if (curr % i == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) count++;
    }
    
    return curr;
}