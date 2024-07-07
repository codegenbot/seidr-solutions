```
double getProbability(int n, int m) {
    double total = (double)n * m;
    double peterHigher = 0;
    
    for(int i=1; i<n; i++) {
        peterHigher += (n-i)*(m/(double)(n*m));
    }
    
    return peterHigher;
}