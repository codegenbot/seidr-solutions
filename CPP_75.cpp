bool is_multiply_prime(int a){
    for(long long i=2; i*i<=a; i++){
        long long j=i;
        while(j*j<=a){
            if(a%i==0 && is_prime(i)){
                int k=a/i;
                if(is_prime(k) && is_prime(j)){
                    return true;
                }
            }
            j++;
        }
    }
    return false;
}

bool is_prime(int a){
    if(a<2)
        return false;
    for(long long i=2; i*i<=a; i++){
        if(a%i==0)
            return false;
    }
    return true;
}