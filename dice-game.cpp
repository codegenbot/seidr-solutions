int main() {
    int n = 6; 
    int m = 4; 
    double result = calculateProbability(n, m);
    std::cout << "Probability: " << result << std::endl;
    return 0;
}

double calculateProbability(int n, int m) {
    double total = (n * m) - min((int)n, (int)m);
    return ((double)min((int)n, (int)m)) / (double)(n * m);
}