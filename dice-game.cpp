double getProbability(int n, int m) {
    if(n <= m) return 0;
    double sum = 0;
    for(int i=m+1; i<=n; i++) 
        sum += (double)(1)/m;
    return sum;
}