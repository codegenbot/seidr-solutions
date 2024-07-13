bool is_multiply_prime(int a){
    for(int i=2; i<=100; i++){
        for(int j=i; j<=100; j++){
            for(int k=j; k<=100; k++){
                if(i*j*k==a){
                    bool prime1 = true;
                    bool prime2 = true;
                    bool prime3 = true;

                    for(int p=2; p*p<=i; p++){
                        if(i%p==0) prime1=false;
                    }
                    for(int p=2; p*p<=j; p++){
                        if(j%p==0) prime2=false;
                    }
                    for(int p=2; p*p<=k; p++){
                        if(k%p==0) prime3=false;
                    }

                    return prime1 && prime2 && prime3;
                }
            }
        }
    }
    return false;
}