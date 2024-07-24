bool is_multiply_prime(int a){
    bool flag=false;
    for(int i=2;i<=100;++i)
        if(isPrime(i))
            for(int j=i;j<=100;++j)
                if(isPrime(j) && (a/i)/j==int((a/i)/j))
                    for(int k=(a/i)/j;k>=2;--k)
                        if(k*k*k==(a/i)/j)
                            flag=true;
    return flag;
}

bool isPrime(int n){
    if(n<=1)return false;
    for(int i=2;i*i<=n;++i)
        if(n%i==0)return false;
    return true;
}