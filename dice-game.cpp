#include <cmath>

double probability(int n, int m) {
    double total = (n * m);
    return (m - n + 1) / static_cast<double>(total);
}

int main() {
    std::cout << "The probability is: " << probability(6, 6) << std::endl;
    return 0;
}