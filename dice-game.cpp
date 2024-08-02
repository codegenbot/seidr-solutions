double diceGame(int n, int m) {
    double p_high = (n - m + 1) / static_cast<double>(n);
    double p_low = static_cast<double>(m) / n;
    return p_high * p_low;
}