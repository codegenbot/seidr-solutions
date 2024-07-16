```c
int main() {
    int n, m;
    std::cin >> n >> m;
    double result = probability(n, m);
    std::cout << result << std::endl;
    return 0;
}

double probability(int n, int m) {
    double result = 0.0;
    if (n <= m) return 0; 

    for (int i = 1; i < m; ++i) { 
        result += ((n - m + 1) / (double)n) * (1.0 / m);
    }
    return result;
}