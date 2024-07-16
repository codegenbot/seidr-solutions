int prime_fib(int n){
    if(n == 1) return 2;
    if(n == 2) return 3;
    int count = 2;
    int current = 3;
    int prev = 2;
    while(count < n){
        int temp = current;
        current = current + prev;
        prev = temp;
        bool isPrime = true;
        for(int i = 2; i*i <= current; i++){
            if(current % i == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            count++;
        }
    }
    return current;
}