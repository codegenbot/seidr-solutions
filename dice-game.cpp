```
cpp
double probability(int n, int m) {
    if (m > n) {
        int temp = m;
        m = n;
        n = temp;
    }
    double total = (n + m - 1);
    return (n - m) / total;
}