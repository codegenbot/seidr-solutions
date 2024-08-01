Here is the solution:

bool is_multiply_prime(int a){
    bool found[100] = {false};
    for(int i=2; i<=10; i++){
        int j=i;
        while(j <= 10){
            if(a % j == 0){
                int k=a / j;
                while(k > 1 && !found[k]){
                    found[k] = true;
                    k /= j;
                }
                if(k==1) return true;
            }
            j++;
        }
    }
    return false;
}