int main() {
    int n = 6; 
    int m = 4; 
    double result = calculateProbability(n, m);
    std::cout << "Probability: " << result << std::endl;
    return 0;
}

double calculateProbability(int n, int m) {
    double total = (n * m);
    double higherRolls = (n - m);
    return (higherRolls / total);
}