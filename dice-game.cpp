double diceGame(int n, int m) {
    double sum = 0;
    for (int i = 1; i < min(n, m); i++) {
        sum += (n - i + 1) / (double)n * (m - i) / (double)m;
    }
    return sum;
}

int main() {
    int n; // input
    int m; // input
    std::cout << "Enter the number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides for Colin's die: ";
    std::cin >> m;
    std::cout << diceGame(n, m) << std::endl;
    return 0;
}