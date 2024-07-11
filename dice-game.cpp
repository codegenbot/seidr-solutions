int main() {
    double result = getProbability(4, 6); 
    std::cout << "Probability: " << result << std::endl;
    return 0;
}

double getProbability(int n, int m) {
    double p = 0.0;
    for (int i = 1; i < m; i++) {
        p += (n - i) / (double)n * ((m - 1) / (double)m);
    }
    return p;
}