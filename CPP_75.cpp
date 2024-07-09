bool is_multiply_prime(int a){
    for(int i=2; i<=100; i++){
        for(int j=i; j<=100; j++){
            for(int k=j; k<=100; k++){
                if(i*j*k==a){
                    bool flag=true;
                    for(int p=2; p*p<=k; p++){
                        if(k%p==0)flag=false;break;
                    }
                    if(flag){
                        bool flag1=true;
                        for(int q=2; q*q<=j; q++){
                            if(j%q==0)flag1=false;break;
                        }
                        if(flag1){
                            bool flag2=true;
                            for(int r=2; r*r<=i; r++){
                                if(i%r==0)flag2=false;break;
                            }
                            if(flag2)return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}