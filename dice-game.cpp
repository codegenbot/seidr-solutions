int main() {
    int n = 6; 
    int m = 4; 
    double result = calculateProbability(n, m);
    std::cout << "Probability: " << result << std::endl;
    return 0;
}

double calculateProbability(int n, int m) {
    if (m > n) {
        std::swap(n, m);
    }
    double total = (n * m);
    for (int i = 1; i <= m; i++) {
        total += n - i;
    }
    return (total * 1.0) / (n * m);
}