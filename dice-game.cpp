```
double getProbability(int n, int m) {
    double total = (double)(n * m);
    double probability = 0;
    for(int i=1; i<n; i++) {
        probability += (double)(n-i+1)/total;
    }
    return probability;
}