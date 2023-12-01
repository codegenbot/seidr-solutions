int main() {
    int n, m;
    std::cin >> n >> m;

    double probability = probabilityOfHigherRoll(n, m);
    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;

    return 0;
}