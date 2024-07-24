```cpp
double getProbability(int n, int m) {
    double total = (double)(n * m);
    double prob = 0;
    
    for(int i=1; i<=m; ++i){
        prob += (double)1/total;
    }
    
    return 1 - prob;
}