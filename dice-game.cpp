double diceGame(int n, int m) {
    double probability = 0;
    for (int i = 1; i < n; i++) {
        probability += 1.0 / (n * m);
    }
    return probability;
}