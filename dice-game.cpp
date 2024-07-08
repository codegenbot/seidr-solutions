int main() {
    double result = diceGame(4, 6);
    return 0;
}

double diceGame(int n, int m) {
    double result = 0.0;
    for (int i = 1; i < m; i++) {
        if(i < n) continue;
        result += (n - i) / (double)(n * m);
    }
    return result;
}