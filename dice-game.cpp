```cpp
double probability(int n, int m) {
    double total = (n + m - 1);
    return ((m - 1.0) * (n - 1.0)) / total;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double result = probability(n, m);
    std::cout << result << std::endl;
    return 0;
}