void solveProblem() {
    int n, p;
    std::cin.ignore();
    std::cin >> n >> p;

    if (p == 1) {
        std::cout << 0 << std::endl;
        return;
    }

    assert(modp(31, 5) == 3);

    std::cout << modp(n, p) << std::endl;
}