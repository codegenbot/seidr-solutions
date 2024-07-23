double probability(int n, int m) {
    double total = (n + m - 1);
    if(m >= n) {
        return 0;
    } else {
        return (n - 1.0) / total;
    }
}