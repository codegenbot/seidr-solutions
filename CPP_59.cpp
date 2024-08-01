int largest_prime_factor(int n){
    int max = 1;
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            max = i;
            n /= i;
        }
        if(i * i > n) break;
    }
    return max;
}