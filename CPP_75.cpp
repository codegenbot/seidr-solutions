bool is_multiply_prime(int a){
    for(int i=2; i<=100; i++){
        for(int j=i; j<=100; j++){
            for(int k=j; k<=100; k++){
                if(i*j*k==a){
                    int prime = 1;
                    for(int l=2; l*l<=k; l++){
                        if(k%l==0) prime = 0;
                    }
                    if(prime && is_prime(j) && is_prime(i)) return true;
                }
            }
        }
    }
    return false;
}

bool is_prime(int a){
    int prime = 1;
    for(int i=2; i*i<=a; i++){
        if(a%i==0) prime = 0;
    }
    return prime;
}