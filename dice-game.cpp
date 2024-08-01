double diceGame(int n, int m) {
    double total = (double)(n * m);
    double prob = 0;
    for(int i = 1; i < n; i++) {
        prob += (double)i / total;
    }
    return prob;
}