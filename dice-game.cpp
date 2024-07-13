int main() {
    int n = 6; // set your value here
    int m = 6; // set your value here
    double result = probability(n, m);
    std::cout << "Result: " << result << std::endl;
    return 0;
}

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < m && j < i; j++) {
            p += 1.0 / total;
        }
    }

    return p;
}