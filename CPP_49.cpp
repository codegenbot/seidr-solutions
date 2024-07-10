int modp(int n, int p) {
    if (n == 0)
        return 1;
    long long res = 1;
    for(int i=1;i<=n;i++){
        res = (res*p)%p;
    }
    return res;
}