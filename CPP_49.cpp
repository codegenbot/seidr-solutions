#include <iostream>

int modp(int n, int p) {
    if (p == 1) return 0;
    int result = 1;
    n = n % p;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * n) % p;
        }
        n = (n * n) % p;
    }
    return result;
}

int solveProblem() {
    int n, p;
    if (!(std::cin >> n >> p)) {
        std::cerr << "Error reading input." << std::endl;
        return 1;
    }

    if (n < 1 || n > 1000 || p < 1 || p > 1000) {
        std::cerr << "Input values are out of bounds." << std::endl;
        return 1;
    }

    std::cout << modp(n, p) << std::endl;
    return 0;
}