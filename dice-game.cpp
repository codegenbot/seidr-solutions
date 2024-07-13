int main() {
    int n, m;
    std::cin >> n >> m;
    double total = (double)n * m;
    double p = 0;

    for (int i = 1; i < n; i++) {
        p += (double)(n - i) / total;
    }

    std::cout << p << std::endl;
    return 0;
}