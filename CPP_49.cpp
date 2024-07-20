int modp(int n, int p) {
    if(p==2) return (n%2);
    long long res = 1;
    for(int i=0; i<31 && (1<<i)<=p; i++) {
        if(n&(1<<i)) res = (res*p)%p;
    }
    return res;
}