double diceGame(int n, int m) {
    double probability = 0.0;
    for (int i = 1; i < n; i++) {
        probability += 1.0 / pow(m, i);
    }
    return probability;
}