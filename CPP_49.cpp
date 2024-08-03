int modp(int n,int p){
    long long res = 1; 
    for(int i=0;i<32;++i){
        if(n&(1<<i)){
            res=(long long)res*p%((long long)p);
        }
    }
    return (int)(res%p+res/p+p)%p;
}