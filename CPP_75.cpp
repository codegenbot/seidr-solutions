bool is_multiply_prime(int a){
    for(int i=2; i<=100; i++){
        for(int j=i; j<=100; j++){
            for(int k=j; k<=100; k++){
                if(i*j*k==a){
                    bool prime1 = true;
                    bool prime2 = true;
                    bool prime3 = true;

                    for(int x=2; x*i < i; x++){
                        if(i%x == 0) {
                            prime1 = false;
                            break;
                        }
                    }

                    for(int x=2; x*j < j; x++){
                        if(j%x == 0) {
                            prime2 = false;
                            break;
                        }
                    }

                    for(int x=2; x*k < k; x++){
                        if(k%x == 0) {
                            prime3 = false;
                            break;
                        }
                    }

                    return prime1 && prime2 && prime3;
                }
            }
        }
    }
    return false;
}