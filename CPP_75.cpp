bool is_multiply_prime(int a){
    for(long long i=2; i*i<=a; i++){
        long long j=i;
        while(j*j<=a){
            if(a%i==0 && is_prime(i) && is_prime(j) && (i*j)==a)
                return true;
            j++;
        }
    }
    return false;
}

bool is_prime(long long p){
    if(p<2)
        return false;
    for(int i=2; i*i<=p; i++){
        if(p%i==0)
            return false;
    }
    return true;
}