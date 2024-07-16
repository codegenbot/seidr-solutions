double diceGame(int n, int m) {
    double total = (n * 1.0) + (m * 1.0);
    return std::min((n - 1.0) / total, 1.0 - ((n > m ? n : m) - 1.0) / total);
}