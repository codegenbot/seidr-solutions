bool is_multiply_prime(int a){
    for(int i=2; i<=a; i++){
        bool isPrime = true;
        for(int j=2; j*j <= i; j++){
            if(i%j == 0) {
                isPrime = false;
                break;
            }
        }
        int b=i, c=a/i;
        if(isPrime && b*c==a){
            return true;
        }
    }
    return false;
}