double probability(int n, int m) {
    double total = (double)(n*m);
    if(m > n)
        std::swap(n,m);
    double p = 0;
    for(int i = n+1; i <= m; i++)
        p += 1.0 / total;
    return p;
}