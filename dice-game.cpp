int main() {
    int n = 6; 
    int m = 6; 
    double result = diceGame(n, m);
    std::cout << "Probability: " << result << std::endl;
    return 0;
}

double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i < n; i++) { 
        total += (n - i) * (m - 1) / (n * m);
    }
    return total;
}