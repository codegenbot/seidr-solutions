double getProbability(int n, int m) {
    double num = 0.0;
    for(int i=1; i<m; ++i){
        num += (double)1/(n*m);
    }
    return 1 - num;
}