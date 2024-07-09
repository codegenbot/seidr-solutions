#include <cmath>

double probability(int n, int m) {
    double total = (n + m - 1);
    return std::min((double)m / total, 1.0) * (n > m);
}

int main() {
    for (int i = 2; i <= 10; ++i) {
        for (int j = 2; j <= 10; ++j) {
            double res = probability(i, j);
            std::cout << "For a " << i << "-sided die and a "
                      << j << "-sided die, the probability that Peter rolls strictly higher than Colin is: " << res << "\n";
        }
    }
    return 0;
}