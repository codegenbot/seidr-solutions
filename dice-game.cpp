```cpp
#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    double total = (double)n * m;
    double result = 0;

    for (int i = 1; i <= m; i++) {
        result += ((n - i) / (double)(n * m));
    }

    return result;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double result = probability(n, m);
    std::cout << std::fixed << std::setprecision(9) << result << "\n";
    return 0;
}