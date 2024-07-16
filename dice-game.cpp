#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    double total = (double)n * m;
    double result = 0;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= min(i, n); j++) {
            if (j < i)
                result += 1.0;
        }
    }

    return result / total;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double result = probability(n, m);
    std::cout << std::fixed << std::setprecision(6) << result << "\n";
    return 0;
}