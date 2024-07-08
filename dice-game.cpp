int main() {
    double result = diceGame(4, 6);
    return 0;
}

double diceGame(int n, int m) {
    if (n > m) {
        swap(n, m);
    }
    double totalPossibilities = (double)n * m;
    double probability = 0.0;
    for (int i = 1; i < m - (m % n); i++) {
        probability += (n - (i % n)) / totalPossibilities;
    }
    return probability;
}