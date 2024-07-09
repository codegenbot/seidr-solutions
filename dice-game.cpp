long double probability(int n, int m) {
    long double total = 0; 
    for (int i = 1; i <= m; i++) {
        total += 1.0 / m - 1.0 / n;
    }
    return total;
}

int main() {
    std::cout << fixed << setprecision(10) << probability(34) << std::endl;
    return 0;
}