double getProbability(int n, int m) {
    if(n <= m)
        return 0;
    else
        return 1.0 - ((double)(m+1))/n;
}