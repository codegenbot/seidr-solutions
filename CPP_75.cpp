Here is the solution:

bool is_multiply_prime(int a){
    for(int i=2; i<=a/3; i++){
        int count = 0;
        for(int j=2; j*j <= i; j++){
            if(i%j == 0) count++;
        }
        if(count==1) {
            for(int k=2; k*a/(i*k)<=100; k++){
                int temp = a/(i*k);
                int count1 = 0;
                for(int l=2; l*l <= temp; l++){
                    if(temp%l == 0) count1++;
                }
                if(count1==1){
                    int temp1 = i*k*temp;
                    int count2 = 0;
                    for(int m=2; m*m <= temp1; m++){
                        if(temp1%m == 0) count2++;
                    }
                    if(count2==1) return true;
                }
            }
        }
    }
    return false;
}