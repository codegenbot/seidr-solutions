```cpp
double probability(int n, int m) {
    double total = (n * m - min(n,m));
    if(total == 0) return 1.0;
    return (m - min(n,m)) / total;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double result = probability(n, m);
    std::cout << result << std::endl;
    return 0;
}