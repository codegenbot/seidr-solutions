if (n == 1) return 2;
    if (n == 2) return 3;
    
    int first = 2, second = 3, next;
    int count = 2;
    
    while (count < n) {
        next = first + second;
        first = second;
        second = next;
        
        bool isPrime = true;
        for (int i = 2; i * i <= next; i++) {
            if (next % i == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            count++;
        }
    }
    
    return next;
}