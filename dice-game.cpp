int main() {
    int n, m;
    cin >> n >> m;
    double d = diceGame(n, m);
    std::cout << fixed << setprecision(6) << d;
    std::cout << std::setiosflags(std::ios::fixed) | std::setprecision(2);
    std::cout << d << endl;
    return 0;
}