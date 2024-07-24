double getProbability(int n, int m) {
    double p = 0;
    
    for (int i = m + 1; i <= n; ++i)
        p += (double)(1)/m;

    return p;
}