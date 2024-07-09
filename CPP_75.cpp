bool is_multiply_prime(int a){
    for(int i=2; i<=100; i++){
        for(int j=i; j<=100; j++){
            for(int k=j; k<=100; k++){
                if(i*j*k == a){
                    bool prime = true;
                    for(int x=2; x<=k/2 && prime; x++){
                        if(k%x==0) prime=false;
                    }
                    if(prime && i%j==0 && j%k==0) return true;
                }
            }
        }
    }
    return false;
}