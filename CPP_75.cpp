bool is_multiply_prime(int a){
    for(int i=2; i<=100; i++){
        int count = 0;
        for(int j=2; j<=i/2; j++){
            if(i%j==0)count++;
        }
        if(count==1 && a%i==0) {
            for(int k=i+1; ;k++) {
                int count2 = 0;
                for(int l=2; l<=k/2; l++){
                    if(k%l==0)count2++;
                }
                if(count2==1) {
                    for(int m=k+1; ;m++) {
                        int count3 = 0;
                        for(int n=2; n<=m/2; n++){
                            if(m%n==0)count3++;
                        }
                        if(count3==1 && a%m==0) return true;
                    }
                }
            }
        }
    }
    return false;
}