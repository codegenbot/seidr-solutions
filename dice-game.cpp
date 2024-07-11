```c++
#include <iostream>
#include <iomanip>

double probability(int n, int m);

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(2) << probability(n, m) << std::endl;
}

double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i < n; i++) {
        sum += (n - i) * (m / static_cast<double>(m));
    }
    return sum;
}