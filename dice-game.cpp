int main() {
    int n, m;
    std::cin >> n >> m;
    double total = 0.0;
    for (int i = 1; i < n; i++) { 
        for (int j = 1; j <= m && j < i; j++) {
            total += 1.0/static_cast<double>(n*m);
        }
    }
    std::cout << total;
    return 0;
}