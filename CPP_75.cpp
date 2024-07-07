Here is the solution:

bool is_multiply_prime(int a){
    for(int i=2; i<=100; i++){
        for(int j=i; j<=100; j++){
            for(int k=j; k<=100; k++){
                if(i*j*k==a){
                    int prime = 1;
                    for(int l=2; l<=k; l++){
                        if(k%l==0) prime = 0;
                    }
                    if(prime && is_multiply_prime(i) && is_multiply_prime(j) && is_multiply_prime(k)) return true;
                }
            }
        }
    }
    return false;
}