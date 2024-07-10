```
int main() {
    int n, m;
    std::cin >> n >> m;
    double result = diceGame(n, m);
    std::cout << result << std::endl;
    return 0;
}

double diceGame(int n, int m) {
    double sum = 0.0;
    for (int i = 1; i < n && i < m; i++) {
        sum += (n - i) * (m - i + 1) / (double)n / (double)m;
    }
    return sum;
}