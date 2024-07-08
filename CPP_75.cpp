bool is_multiply_prime(int a){
    for(int i=2; i<=a/3; i++){
        int prime1 = 0, prime2 = 0, prime3 = 0;
        for(int j=2; j*j <= i; j++){
            if(i%j == 0) prime1 = 1;
            if(j%2 == 0 && j != 2) prime1 = 1;
        }
        for(int k=2; k*k <= a/i; k++){
            if(a%i == 0){
                int temp = i;
                while(temp % k == 0) temp /= k;
                if(temp > 1 || (k > 1 && k < 10)) prime2 = 1;
            }
        }
        for(int m=2; m*m <= a/(i*j); m++){
            if(a%(i*j) == 0){
                int temp = i*j;
                while(temp % m == 0) temp /= m;
                if(temp > 1 || (m > 1 && m < 10)) prime3 = 1;
            }
        }
        if(prime1 && prime2 && prime3) return true;
    }
    return false;