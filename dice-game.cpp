double getProbability(int n, int m) {
    double totalOutcomes = (double)(n*m);
    double favorableOutcomes = (n-1)*m;
    return (double)favorableOutcomes / totalOutcomes;
}