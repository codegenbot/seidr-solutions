int prime_fib(int n){
        if (n <= 0) return -1;
        if (n == 1) return 2;
        if (n == 2) return 3;
        
        int prev = 2, curr = 3;
        int count = 2;
        
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
            
            if (isPrime) {
                count++;
            }
        }
        
        return curr;
    }