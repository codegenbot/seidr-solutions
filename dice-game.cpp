```c++
#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (n - i + 1.0) / n;
    }
    return sum * (m == n ? 0 : 1.0);
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(5) << probability(n, m) << std::endl;
    return 0;
}