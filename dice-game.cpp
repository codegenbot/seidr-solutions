#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    double prob = 0.0;
    if (n > m) {
        prob = 1.0;
    } else if (n < m) {
        prob = static_cast<double>(n) / static_cast<double>(m);
    }

    std::cout << prob << std::endl;

    return 0;
}