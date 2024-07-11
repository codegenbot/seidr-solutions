#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    double probability = 0.0;
    for (int i = 1; i <= (n - 1); ++i) {
        probability += i * 1.0 / n * (m * 1.0 / (n * m));
    }
    probability += n * 1.0 / m * (m * 1.0 / (n * m)); // Add this line

    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;

    return 0;
}