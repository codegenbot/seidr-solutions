Here is the solution:

bool is_multiply_prime(int a){
    bool flag = false;
    for(int i=2; i<=3; ++i){
        for(int j=2; j<=a/i && !flag; ++j){
            int k = a/(i*j);
            if(k>1 && is_prime(i) && is_prime(j) && is_prime(k)){
                flag = true;
            }
        }
    }
    return flag;
}

bool is_prime(int n){
    if(n<2)
        return false;
    for(int i=2; i*i<=n; ++i){
        if(n%i==0)
            return false;
    }
    return true;
}