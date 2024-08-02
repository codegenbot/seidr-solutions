Here is the solution:

bool is_multiply_prime(int a){
    for(long long i=2; i*i<=a; i++){
        long long j=i;
        while(j*j<=a){
            long long k=a/j/i;
            if(k*k==j&&isPrime(k))return true;
            j++;
        }
    }
    return false;
}

bool isPrime(int n){
    if(n<2)return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0)return false;
    }
    return true;
}