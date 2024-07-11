```cpp
#include <iostream>
#include <iomanip>

double probability(int n, int m);

int main() {
    int n, m;
    cin >> n >> m;
    double result = probability(n, m);
    std::cout << std::fixed << std::setprecision(6) << result << std::endl;
}

double probability(int n, int m) {
    if (n < m)
        return 0.0;
    else
        return static_cast<double>(m + 1) / n;
}