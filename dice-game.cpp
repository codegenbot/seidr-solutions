#include <iostream>

double probability(int n, int m) {
    if (n <= m)
        return 0;
    
    double total = (double)n * m;
    double result = 0;

    for (int i = 1; i <= m; i++) {
        result += (double)(n - i) / total;
    }

    return result;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << fixed << setprecision(2) << probability(n, m) << "\n";
    return 0;
}