bool is_multiply_prime(int a){
    for(int i=2; i<=100; i++){
        for(int j=i; j<=100; j++){
            for(int k=j; k<=100; k++){
                if(i*j*k==a){
                    int prime_check = 0;
                    for(int l=2; l*l<=k; l++){
                        if(k%l==0)prime_check = 1;
                    }
                    if(prime_check == 0 && i!=1 && j!=1 && k!=1) return true;
                }
            }
        }
    }
    return false;
}