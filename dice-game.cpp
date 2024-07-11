```
double probability(int n, int m) {
    if (n < m)
        return 0.0;
    else
        return 1 - static_cast<double>(m*(m-1))/2.0/n;
}