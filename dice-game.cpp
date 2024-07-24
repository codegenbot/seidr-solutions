double getProbability(int n, int m) {
    if(m > n)
        std::swap(n, m);
    double sum = 0;
    for(int i = 1; i < n; i++)
        sum += (double)(n-i)/(n*m);
    return sum + (double)1/(n*m);
}