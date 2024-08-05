double diceGame(int n, int m) {
    double totalOutcomes = n*m;
    double favorableOutcomes = n-m+1;
    return favorableOutcomes/totalOutcomes;
}