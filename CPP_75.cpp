Here is the completed code:

bool is_multiply_prime(int a){
    for(int i=2; i<=100; i++){
        int count = 0;
        for(int j=2; j<=i/2; j++){
            if(i%j==0)
                count++;
        }
        if(count==0 && a%i==0){
            int b = a/i;
            bool flag1 = false, flag2 = false;
            for(int k=2; k<=b/2; k++){
                if(b%k==0){
                    flag1 = true;
                    break;
                }
            }
            for(int l=2; l<=i/2; l++){
                if(i%l==0){
                    flag2 = true;
                    break;
                }
            }
            if(flag1 && flag2)
                return true;
        }
    }
    return false;
}