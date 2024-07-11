bool is_multiply_prime(int a) {
    for(int i=2; i*i<=a; i++){
        int j=i;
        while(a%i==0){
            if(is_prime(i)){
                j=i;
                break;
            }
            else j=i;
            a/=i;
        }
        if(j*j>a) return true;
    }
    return false;
}

bool is_prime(int n) {
    if(n<2) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}