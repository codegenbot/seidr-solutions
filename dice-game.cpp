double probability(int n, int m) {
    double total = (double)n * (double)m;
    for (int i = 1; i <= std::min(n, m); i++) {
        if(i > m) total -= (i / (double)n);
        else total += (i / (double)n);
    }
    return total;
}