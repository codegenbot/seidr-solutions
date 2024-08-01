bool is_multiply_prime(int a){
    for(long long i=2; i<=a/3; i++){
        bool prime = true;
        for(long long j=2; j*j <= i; j++){
            if(i % j == 0) prime = false;
        }
        if(prime){
            int b=i*i;
            while(b<=a){
                int c=(int)sqrt((double)(a-b));
                if(c*c==b) return true;
                b+=i;
            }
        }
    }
    return false;
}