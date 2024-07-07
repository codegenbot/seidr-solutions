Here is the solution:

bool is_multiply_prime(int a){
    for(long long i=2; i*i<=a; i++){
        if(a%i==0){
            int count = 0;
            for(long long j=2; j*j<=i; j++){
                if(i%j==0)count++;
            }
            if(count==1&&is_multiply_prime(i/a)){
                return true;
            }
        }
    }
    return false;
}