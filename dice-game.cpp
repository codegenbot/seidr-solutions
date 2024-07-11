double getProbability(int n, int m) {
    double totalOutcomes = n*m;
    double winningOutcomes = (m-1)*n;
    return winningOutcomes/totalOutcomes;
}