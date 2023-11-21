double probabilityOfPeterWinning(int n, int m) {
    return static_cast<double>(n - 1) / n * (m - 1) / m;
}