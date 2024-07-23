double getProbability(int n, int m) {
    if(n <= m)
        return 1.0 - (double)m/(n+m);
    else
        return (double)m/(n+m);
}
int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(1) << getProbability(n, m) << '\n';
    return 0;
}